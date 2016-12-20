#include "login.h"
#include "ui_login.h"
#include <string>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

void Login::on_pushButton_clicked()
{
        QString tmp_username;
        QString tmp_password;
        tmp_username = ui->lineEdit->text();
        tmp_password = ui->lineEdit_2->text();
        username_current = tmp_username.toStdString();
        password_current = tmp_password.toStdString();
        //add if statement to checkUser()
        if (checkUser()){
            sessionmanager = new SessionManager(username_current,password_current);
            mainfeed = new MainFeed(sessionmanager);
            mainfeed->show();
            this->close();
            std::cout << "works" << std::endl;
        }
}

bool Login::checkUser() {
    //open db connection
    DBHandler *db = new DBHandler(&log);
            //= *(new DBHandler::DBHandler());
    //create a vector to catch the db dump
    std::vector<std::vector<std::string> > dump;

    //build query
    std::string query = "SELECT username,password from users;";
    //run query
    dump = *(db->runQuery(query));


    //get username from db
    std::string db_user = "NULL";
    std::string db_pwd = "NULL";

    for(int i = 1; (unsigned)i < dump.at(0).size() ; i++){
        if(dump.at(0).at(i) == username_current){
            db_user = dump.at(0).at(i);
            db_pwd = dump.at(1).at(i);
        }
    }

    std::string username_current_upper = username_current;
    //make current_username and db_user case insensitive
    //std::transform(db_user.begin(), db_user.end(), db_user.begin(), ::toupper);
    //std::transform(username_current_upper.begin(), username_current_upper.end(), username_current_upper.begin(), ::toupper);
    //get password from db

    //validate credentials
    if(username_current_upper == db_user) {
        //username is valid, check password
        if(password_current == db_pwd) {
            //password is correct
            //log
            log << "Login: DB verified user as valid";
            return true;
        } else {
            //password incorrect
            //log
            log << "Login: DB verified user as invalid (code 2)";
            return false;
        }
    } else {
        //username does not exist in db
        //log
        log << "Login: DB verified user as invalid (code 1)";
        return false;
    }
}
