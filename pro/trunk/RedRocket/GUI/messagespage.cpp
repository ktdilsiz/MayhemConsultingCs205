﻿#include "messagespage.h"
#include "ui_messagespage.h"

MessagesPage::MessagesPage(SessionManager *sessionmanager) :
    ui(new Ui::MessagesPage)
{
    ui->setupUi(this);
    session_manager = sessionmanager;
    direct_messages = session_manager->getMessagesDirect(session_manager->current_user->username,session_manager->current_recipient);
    std::cout << "hit creating the vector" << std::endl;
    std::cout << direct_messages.size() << std::endl;
    for (unsigned int i = 1; i < direct_messages.at(0).size(); i++){
        QString time;
        QString sender;
        QString content;
        time = QString::fromStdString(direct_messages.at(0).at(i));
        std::cout << "hit getting time" << std::endl;
        content = QString::fromStdString(direct_messages.at(1).at(i));
        std::cout << "hit getting content" << std::endl;
        if (direct_messages.at(2).at(i) == session_manager->current_user->username){
            sender = QString::fromStdString(session_manager->current_recipient);
        }
        else {
            sender = QString::fromStdString(session_manager->current_user->username);
        }
        QString message = sender + "-- " + time + "-- " + content;
        ui->listWidget->addItem(message);
        std::cout << "hit adding message to the list widget" << std::endl;
    }
    //get current username from the databse or session manager
    ui->label_username->setText(QString::fromStdString(session_manager->current_user->username));

    //get the current message recipient from the databse or session manager
    ui->label_recipientuser->setText(QString::fromStdString(session_manager->current_recipient));
}

MessagesPage::~MessagesPage()
{
    delete ui;
}

void MessagesPage::on_pushButton_sendmessage_clicked()
{
    //add message to the database
    //add message to the current chat window
    session_manager->addMessagesDirect(ui->textEdit_typemessage->toPlainText().toStdString(),session_manager->current_recipient,getTime());
    addText();
    ui->textEdit_typemessage->clear();
}

std::string MessagesPage::getTime(){
    time_t currentTime;
    struct tm *localTime;

    time( &currentTime );                   // Get the current time
    localTime = localtime( &currentTime );  // Convert the current time to the local time

    int Day    = localTime->tm_mday;
    int Month  = localTime->tm_mon + 1;
    int Year   = localTime->tm_year + 1900;
    int Hour   = localTime->tm_hour;
    int Min    = localTime->tm_min;
    int Sec    = localTime->tm_sec;
    std::string time;

    //This section concats the different ints to represent the date and time of the post in
    //a easy to read manner.
    if (Min < 10){
        time = std::to_string(Year) + "-" + std::to_string(Month) + "-" + std::to_string(Day) + " " + std::to_string(Hour) + ":" + "0" + std::to_string(Min);
    }
    else {
        time = std::to_string(Year) + "-" + std::to_string(Month) + "-" + std::to_string(Day) + " " + std::to_string(Hour) + ":" + std::to_string(Min);
    }

    return time;
}

void MessagesPage::addText(){
    QString final_string;
    std::string time_date = getTime();
    QString post_text = ui->textEdit_typemessage->toPlainText();
    final_string = QString::fromStdString(time_date) + QString::fromStdString("- ") + post_text;
    ui->listWidget->addItem(final_string);
}
