#ifndef USERSETTINGS_H
#define USERSETTINGS_H
#include "screen.h"
#include "../model/user.h"

class UserSettings: public Screen
{
public:
    std::string username;
    std::string first_name;
    std::string last_name;
    std::string user_email;
    std::string test_message;
    int user_type;
    UserSettings();
    User *current_user;
    void drawInitialUserSettings();
    void runUserSettings();
    void drawUserSettings();
    int changePosition(const int x);
    void enterOption();
};

#endif // USERSETTINGS_H
