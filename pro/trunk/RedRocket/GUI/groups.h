#ifndef GROUPS_H
#define GROUPS_H

#include <QWidget>
#include "settings.h"
#include "profile.h"
#include "mainfeed.h"
#include "messages.h"
#include "grouppage.h"
#include <vector>

namespace Ui {
class Groups;
}
class Profile;
class Settings;
class MainFeed;
class Messages;
class GroupPage;
class Groups : public QWidget
{
    Q_OBJECT

public:
    explicit Groups(QWidget *parent = 0);
    Groups(SessionManager *manager);
    ~Groups();

private slots:
    void on_pushButton_username_clicked();

    void on_pushButton_groups_clicked();

    void on_pushButton_messages_clicked();

    void on_pushButton_settings_clicked();

    void on_pushButton_mainfeed_clicked();

    void on_pushButton_startchat_clicked();

private:
    Ui::Groups *ui;
    Profile *profile;
    Settings *settings;
    MainFeed *mainfeed;
    Messages *messages;
    GroupPage * grouppage;
    SessionManager *session_manager;
    std::vector<std::string> groups;
};

#endif // GROUPS_H
