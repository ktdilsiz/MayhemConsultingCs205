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
    //lanuch group home page
    //grouppage = new GroupPage();
    //grouppage->show();
    //this->close();
}

void GroupSettings::on_pushButton_groupmessages_clicked()
{
    //launch group messages
}

void GroupSettings::on_pushButton_groupsettings_clicked()
{
    //launch group settings
    //Current page
}
