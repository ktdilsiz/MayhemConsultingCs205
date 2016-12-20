#ifndef LOGIN_H
#define LOGIN_H
#include <ctype.h>
//#include <iostream>
//#include <string>
//#include <vector>

#include "screen.h"

class Login: public Screen
{
public:

    /*!
     * \brief login_v_options   Vector containing possible locations for
     * the vertical position of the arrow
     */
    std::vector<int> login_v_options;
    /*!
     * \brief login_h_options   Vector containing possible locations for
     * the horiztontal position of the arrow
     */
    std::vector<int> login_h_options;

    //current username input
    std::string username_current;
    //current password input
    std::string password_current;
    //current error_message
    std::string error_message;

    bool continue_looping;

    /*!
     * \brief Login Constructor for the class
     * Pushes back the possible options for the arrow location
     * Both vertical and horizontal locations are pushed by and
     * Can be distinguished by the login_v & login_h
     *
     * Also, sets the following global values
     * vertical_current = 9
     * horizontal_current =16
     */
    Login();


    /*!
     * \brief drawLogin Combines two different methods for drawing the screen
     * drawInitialLogin draws the general screen
     * drawArrow draws the arrow that points on the options
     */
    void drawLogin();

    /*!
     * \brief runLogin  Login starts with this command and loops until
     * the program is exited from which is the ch value corresponding to 27 -- Esc key
     */
    void runLogin();

    /*!
     * \brief drawInitialLogin  Draws the main structure of the textUI login screen
     * Places the options such as:
     * Username, Password, Sign In and Reset
     *
     * Also draws the box surrounding the login options
     */
    void drawInitialLogin();

    /*!
     * \brief enterOption
     */
    bool enterOption();

    /*!
     * \brief changePosition  Changes the location of the arrow on the screen
     * \param x Input key which corresponds to the direction
     */
    int changePosition(const int x);

    /*!
     * \brief checkUser Validates the user credentials with the database.
     * \return Returns true if it is a valid user, false if credentials are incorrect.
     */
    bool checkUser();
};

#endif // LOGIN_H
