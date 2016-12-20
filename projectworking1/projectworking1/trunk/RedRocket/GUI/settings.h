#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "mainfeed.h"
#include "profile.h"

namespace Ui {
class Settings;
}
class Profile;
class MainFeed;
class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    Settings(SessionManager *sessionmanager);
    ~Settings();

private slots:
    void on_pushButton_firstname_clicked();

    void on_pushButton_lastname_clicked();

    void on_pushButton_email_clicked();

    void on_pushButton_phone_clicked();

    void on_pushButton_mainfeed_clicked();

    void on_pushButton_username_clicked();

private:
    Ui::Settings *ui;
    MainFeed *mainfeed;
    Profile *profile;
    SessionManager *session_manager;
    std::string firstname_current;
    std::string lastname_current;
    std::string email_current;
    std::string phonenumber_current;
};

#endif // SETTINGS_H
