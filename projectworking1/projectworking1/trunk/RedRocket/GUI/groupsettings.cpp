#include "groupsettings.h"
#include "ui_groupsettings.h"

GroupSettings::GroupSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupSettings)
{
    ui->setupUi(this);
}

GroupSettings::~GroupSettings()
{
    delete ui;
}

void GroupSettings::on_pushButton_username_clicked()
{
    //launch user profile
    profile = new Profile();
    profile->show();
    this->close();
}

void GroupSettings::on_pushButton_groupfeed_clicked()
{
    //TODO
    //laauch group home page
    //grouppage = new GroupPage();
    //grouppage->show();
    //this->close();
}

void GroupSettings::on_pushButton_groupmessages_clicked()
{
    //TODO
    //launch group messages
}

void GroupSettings::on_pushButton_groupsettings_clicked()
{
    //TODO
    //launch group settings
    //Current page
}
