﻿#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "mainfeed.h"
#include "../model/dbhandler.h"
#include "../model/log.h"
#include <string>
#include "../model/sessionmanager.h"
#include <iostream>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Log log;

    explicit Login(QWidget *parent = 0);
    ~Login();
    bool checkUser();
    bool checkUser(std::string, std::string);

    std::string username_current;
    std::string password_current;
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Login *ui;
    MainFeed *mainfeed;
    SessionManager *sessionmanager;
};

#endif // LOGIN_H
