#include <iostream>
#include "login.h"
#include "createuser.h"
#include "mainfeed.h"
#include "usersettings.h"
using namespace std;

int main()
{

    Login login;
    login.runLogin();
    //CreateUser cu;
    //cu.runCreateUser();
    MainFeed main_feed;
    main_feed.runMainFeed();

    //This method does not work currently, tried to implement it.
    //main_feed.runMainFeed2();

//    UserSettings us;
//    us.runUserSettings();

    //login.username_current = "stern";
    //login.password_current = "12345678";

    cout << login.username_current << " " << login.password_current << endl;

    if(login.checkUser()){
        cout << "works" << endl;
    } else {
        cout << "hits" << endl;
    }

    return 0;
}
