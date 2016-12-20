#ifndef CREATEUSER_H
#define CREATEUSER_H
#include "screen.h"


class CreateUser: public Screen
{
public:
    //current username input
    std::string user_type_current;
    //current username input
    std::string username_current;
    //current password input
    std::string password_current;
    //current error_message
    std::string error_message;
    CreateUser();
    void drawInitialCreateUser();
    void drawCreateUser();
    void runCreateUser();
    int changePosition(const int x);
    void enterOption();
};

#endif // CREATEUSER_H
