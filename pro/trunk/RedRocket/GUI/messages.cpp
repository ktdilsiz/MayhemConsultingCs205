#include "messages.h"
#include "ui_messages.h"

Messages::Messages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Messages)
{
    ui->setupUi(this);
    //get the current username
    //set the text on the username button to the current username
    //ui->pushButton_username->setText();
}

Messages::Messages(SessionManager *sessionmanager) :
    ui(new Ui::Messages)
{
    ui->setupUi(this);
    session_manager = sessionmanager;
    //get the current username
    //set the text on the username button to the current username
    ui->pushButton_username->setText(QString::fromStdString(session_manager->current_user->username));
    for (int i = 0; i < session_manager->getUsers().size(); i++){
        ui->listWidget->addItem(QString::fromStdString(session_manager->getUsers().at(i)));
    }
}


Messages::~Messages()
{
    delete ui;
}

void Messages::on_pushButton_groups_clicked()
{
    //launch groups
    groups = new Groups(session_manager);
    groups->show();
    this->close();
}

void Messages::on_pushButton_settings_clicked()
{
    //launch settings
    settings = new Settings(session_manager);
    settings->show();
    this->close();
}

void Messages::on_pushButton_mainfeed_clicked()
{
    //launch main feed
    mainfeed = new MainFeed(session_manager);
    mainfeed->show();
    this->close();
}

void Messages::on_pushButton_username_clicked()
{
    //launch profile
    profile = new Profile(session_manager);
    profile->show();
    this->close();
}


void Messages::on_pushButton_startchat_clicked()
{
    //Start chat was selected
    //Start a chat with the selected username
    QString chat_username;
    chat_username = ui->lineEdit_enter_username->text();
    session_manager->setRecipient(chat_username.toStdString());
    messagespage = new MessagesPage(session_manager);
    messagespage->show();
}
