﻿#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
    //get the current username
    //set the text on the username button to the current username
    //ui->pushButton_username->setText();
}

Profile::Profile(SessionManager *sessionmanager) :
    ui(new Ui::Profile)
{
    ui->setupUi(this);
    session_manager = sessionmanager;
    //get the current username
    //set the text on the username button to the current username
    ui->pushButton_username->setText(QString::fromStdString(session_manager->current_user->username));
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_pushButton_groups_clicked()
{
    //Launch groups page
    groups = new Groups(session_manager);
    groups->show();
    this->close();
}

void Profile::on_pushButton_messages_clicked()
{
    //launch messages page
    messages = new Messages(session_manager);
    messages->show();
    this->close();
}

void Profile::on_pushButton_settings_clicked()
{
    //launch settings page
    settings = new Settings(session_manager);
    settings->show();
    this->close();
}

void Profile::on_pushButton_mainfeed_clicked()
{
    //launch main feed
    mainfeed = new MainFeed(session_manager);
    mainfeed->show();
    this->close();
}

void Profile::on_pushButton_post_clicked()
{
    //Adds the text to the database for the user's profile post and then adds it to the
    //list widget.

    //addText(QString::fromStdString(getTime()));
    addText();
    ui->textEdit_posttext->clear();
}

void Profile::addText(){
    QString final_string;
    std::string time_date = getTime();
    QString post_text = ui->textEdit_posttext->toPlainText();
    final_string = QString::fromStdString(time_date) + QString::fromStdString("- ") + post_text;
    ui->listWidget->addItem(final_string);
}

std::string Profile::getTime(){
    time_t currentTime;
    struct tm *localTime;

    time( &currentTime );                   // Get the current time
    localTime = localtime( &currentTime );  // Convert the current time to the local time

    int Day    = localTime->tm_mday;
    int Month  = localTime->tm_mon + 1;
    int Year   = localTime->tm_year - 100;
    int Hour   = localTime->tm_hour;
    int Min    = localTime->tm_min;
    std::string time;

    //This section concats the different ints to represent the date and time of the post in
    //a easy to read manner.
    if (Min < 10){
        time = to_string(Month) + "/" + to_string(Day) + "/" + to_string(Year) + " " + to_string(Hour) + ":" + "0" + to_string(Min);
    }
    else {
        time = std::to_string(Month) + "/" + std::to_string(Day) + "/" + std::to_string(Year) + " " + std::to_string(Hour) + ":" + std::to_string(Min);
    }
    return time;
}
