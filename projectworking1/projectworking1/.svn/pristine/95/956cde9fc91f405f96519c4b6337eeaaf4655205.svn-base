#ifndef MAINFEED_H
#define MAINFEED_H

#include "../model/sessionmanager.h"
#include <QWidget>
#include "settings.h"
#include "profile.h"
#include "groups.h"
#include "messages.h"
#include <string>

namespace Ui {
class MainFeed;
}
class Messages;
class Profile;
class Settings;
class MainFeed : public QWidget
{
    Q_OBJECT

public:
    explicit MainFeed(QWidget *parent = 0);
    MainFeed(SessionManager *manager);
    ~MainFeed();

private slots:

    void on_pushButton_settings_clicked();

    void on_pushButton_groups_clicked();

    void on_pushButton_messages_clicked();

    void on_pushButton_username_clicked();

private:
    Ui::MainFeed *ui;
    Settings *settings;
    Profile *profile;
    Groups *groups;
    Messages *messages;
    void addText(std::string str);
    std::string username_current;
    std::string getText();
    std::string getUsername();
    SessionManager *session_manager;
};

#endif // MAINFEED_H
