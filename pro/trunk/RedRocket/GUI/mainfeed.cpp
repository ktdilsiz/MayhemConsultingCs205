#include "mainfeed.h"
#include "ui_mainfeed.h"

MainFeed::MainFeed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainFeed)
{
    ui->setupUi(this);

}

MainFeed::MainFeed(SessionManager *manager) :
        ui(new Ui::MainFeed)
{
    session_manager = manager;
    ui->setupUi(this);
    //get the current username
    //set the text on the username button to the current username
    ui->pushButton_username->setText(QString::fromStdString(session_manager->current_user->username));
}

MainFeed::~MainFeed()
{
    delete ui;
}

void MainFeed::addText(std::string str){
    ui->listWidget->addItem(QString::fromStdString(str));
}

void MainFeed::on_pushButton_settings_clicked()
{
    settings = new Settings(session_manager);
    settings->show();
    this->close();
}

void MainFeed::on_pushButton_groups_clicked()
{
    //launch groups page
    groups = new Groups(session_manager);
    groups->show();
    this->close();
}

void MainFeed::on_pushButton_messages_clicked()
{
    //launch messages page
    messages = new Messages(session_manager);
    messages->show();
    this->close();
}

void MainFeed::on_pushButton_username_clicked()
{
    //launch user profile page
    profile = new Profile(session_manager);
    profile->show();
    this->close();
}
