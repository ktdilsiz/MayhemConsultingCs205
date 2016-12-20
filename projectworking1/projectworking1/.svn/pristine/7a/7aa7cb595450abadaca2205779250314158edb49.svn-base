#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    //get the current username
    //set the text on the username button to the current username
    //ui->pushButton_username->setText();
}

Settings::Settings(SessionManager *sessionmanager) :
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    session_manager = sessionmanager;
    //get the current username
    //set the text on the username button to the current username
    ui->pushButton_username->setText(QString::fromStdString(session_manager->current_user->username));
    ui->lineEdit_firstname->insert(QString::fromStdString(session_manager->current_user->first_name));
    ui->lineEdit_lastname->insert(QString::fromStdString(session_manager->current_user->last_name));
    ui->lineEdit_email->insert(QString::fromStdString(session_manager->current_user->email));
    ui->lineEdit_phone->insert(QString::fromStdString(session_manager->current_user->phoneno));
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_pushButton_firstname_clicked()
{
    //Change the firstname_current to the line edit text
    //method to change the first name in the current user's databse
    session_manager->current_user->first_name = ui->lineEdit_firstname->text().toStdString();
}

void Settings::on_pushButton_lastname_clicked()
{
    //method to change the last name in the current user's databse
    session_manager->current_user->last_name = ui->lineEdit_lastname->text().toStdString();
}

void Settings::on_pushButton_email_clicked()
{
    //method to change the email in the current user's databse
    session_manager->current_user->email = ui->lineEdit_firstname->text().toStdString();
}

void Settings::on_pushButton_phone_clicked()
{
    //method to change the phone number in the current user's databse
    session_manager->current_user->phoneno = ui->lineEdit_firstname->text().toStdString();
}

void Settings::on_pushButton_mainfeed_clicked()
{
    //Go back to main feed page
    mainfeed = new MainFeed(session_manager);
    mainfeed->show();
    this->close();
}

void Settings::on_pushButton_username_clicked()
{
    //Launch the user profile
    profile = new Profile(session_manager);
    profile->show();
    this->close();
}
