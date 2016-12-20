#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>
#include "mainfeed.h"
#include "groups.h"
#include "settings.h"
#include "messages.h"
#include <ctime>
#include <iostream>
#include <string>

namespace Ui {
class Profile;
}

class MainFeed;
class Groups;
class Settings;
class Messages;
class Profile : public QWidget
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = 0);
    Profile(SessionManager *sessionmanager);
    ~Profile();

private slots:
    void on_pushButton_groups_clicked();

    void on_pushButton_messages_clicked();

    void on_pushButton_settings_clicked();

    void on_pushButton_mainfeed_clicked();

    void on_pushButton_post_clicked();

private:
    Ui::Profile *ui;
    MainFeed *mainfeed;
    Groups *groups;
    Settings *settings;
    Messages *messages;
    SessionManager *session_manager;
    void addText();
    std::string getTime();
};

#endif // PROFILE_H
