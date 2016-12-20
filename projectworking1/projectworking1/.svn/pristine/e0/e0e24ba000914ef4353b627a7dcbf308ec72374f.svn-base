#include "grouppage.h"
#include "ui_grouppage.h"

GroupPage::GroupPage(SessionManager *sessionmanager) :
    ui(new Ui::GroupPage)
{
    ui->setupUi(this);
    session_manager = sessionmanager;
    groups_messages = session_manager->getMessagesGroup(session_manager->current_group);
    for (unsigned int i = 1; i < (session_manager->getMessagesGroup(session_manager->current_group)).at(0).size(); i++){
        QString time;
        QString sender;
        QString content;
        time = QString::fromStdString(groups_messages.at(0).at(i));
        sender = QString::fromStdString(groups_messages.at(1).at(i));
        content = QString::fromStdString(groups_messages.at(2).at(i));
        QString message = sender + "-- " + time + "-- " + content;
        ui->listWidget->addItem(message);
    }
    //set the group name label to the group's name
    ui->label_groupname->setText(QString::fromStdString(session_manager->current_group));
}

GroupPage::~GroupPage()
{
    delete ui;
}

void GroupPage::on_pushButton_groupsettings_clicked()
{
    /*TODO
    //Checks if the current user is a admin
    if (manager.current_user.user_type == 4){
        //User is a admin and can access the group settings
        groupsettings = new GroupSettings();
        groupsettings->show();
        this->close();
    }
    //Check if the current user is the group leader for this group
    if (manager.current_user.username == current_group.leader_username){
        //If the current user is the group leader then it will load the group settings
        groupsettings = new GroupSettings();
        groupsettings->show();
        this->close();
    }
    */
}
void GroupPage::on_pushButton_sendmessage_clicked()
{
    //Send the message
    session_manager->addMessagesGroup(ui->textEdit_messagetext->toPlainText().toStdString(),session_manager->current_group,getTime());
    addText();
    ui->textEdit_messagetext->clear();
}

std::string GroupPage::getTime(){
    time_t currentTime;
    struct tm *localTime;
    // Get the current time
    time( &currentTime );
    // Convert the current time to the local time
    localTime = localtime( &currentTime );

    int Day    = localTime->tm_mday;
    int Month  = localTime->tm_mon + 1;
    int Year   = localTime->tm_year + 1900;
    int Hour   = localTime->tm_hour;
    int Min    = localTime->tm_min;
    std::string time;

    //This section concats the different ints to represent the date and time of the post in
    //an easy to read manner.
    if (Min < 10){
        time = std::to_string(Year) + "-" + std::to_string(Month) + "-" + std::to_string(Day) + " " + std::to_string(Hour) + ":" + "0" + std::to_string(Min);
    }
    else {
        time = std::to_string(Year) + "-" + std::to_string(Month) + "-" + std::to_string(Day) + " " + std::to_string(Hour) + ":" + std::to_string(Min);
    }

    return time;
}

void GroupPage::addText(){
    QString final_string;
    std::string time_date = getTime();
    QString post_text = ui->textEdit_messagetext->toPlainText();
    final_string = QString::fromStdString(session_manager->current_user->username) + "-- " + QString::fromStdString(time_date) + "-- " + post_text;
    ui->listWidget->addItem(final_string);
}
