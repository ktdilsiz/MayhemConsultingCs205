#include "usersettings.h"

UserSettings::UserSettings()
{
    horizontal_current = 16;
    vertical_current = 7;
    //get method for the username
    //get method for first name
    //get method for last name
    //get method for email
    //get method for phone number
}

void UserSettings::runUserSettings(){
    //initial setup for ncurses
    initscr();
    curs_set(0);
    cbreak();
    noecho();
    //keypad setup for getch()
    keypad(stdscr, TRUE);

    //looping boolean is set to continue looping until exiting
    bool continue_looping = true;

    //drawing screen method is called for initial draw
    drawUserSettings();

    do {
        refresh();

        //key input is stored in ch
        int ch = getch();

        /* Depending on the input, the arrow on the screen moves
         * to different options such as username, password, signin or reset
         *
         * Stops the loop if the input is 27 (esc key)
         */
        switch (ch) {
        case 10:
            enterOption();
            break;
        case KEY_DOWN:
            changePosition(2);
            break;
        case KEY_UP:
            changePosition(0);
            break;
        case 27:
            continue_looping = false;
            break;
        }

        //redraws the screen every loop
        drawUserSettings();

    } while(continue_looping);
    //ncurses ends if the loop boolean turns false
    endwin();
}

void UserSettings::drawInitialUserSettings(){
    clear();
    mvprintw(0, 0, "%s",test_message.c_str());
    mvprintw(5, 30, "User Settings");
    mvprintw(7, 16, "Username:");
    mvprintw(9, 16, "First name:");
    mvprintw(11, 16, "Last name:");
    mvprintw(13, 16, "Email:");
    mvprintw(15, 16, "Phone #:");
    //Print the top of the box
    for (int i=10; i < 68;i++){
        mvaddch(4,i,ACS_HLINE);
    }
    //Print the bottom of the box
    for (int i=10; i < 68;i++){
        mvaddch(19,i,ACS_HLINE);
    }
    //Print the left side of the box
    for (int i=5; i < 19;i++){
        mvaddch(i,9,ACS_VLINE);
    }
    //Print the right side of the box
    for (int i=5; i < 19;i++){
        mvaddch(i,68,ACS_VLINE);
    }
    //Top left corner
    mvaddch(4,9,ACS_ULCORNER);
    //Bottom left corner
    mvaddch(19,9,ACS_LLCORNER);
    //Top right corner
    mvaddch(4,68,ACS_URCORNER);
    //Bottom left corner
    mvaddch(19,68,ACS_LRCORNER);
}

void UserSettings::drawUserSettings(){
    drawInitialUserSettings();
    drawArrow(vertical_current,horizontal_current);
}

int UserSettings::changePosition(const int x){
    /* These if statements individually check;
     * the position of the arrow and
     * the given input from the keyboard
     *
     * Depending on different cases, it moves the arrow to a new location
     * by changing the global values:
     * vertical_current and horizontal_current
     */

    //0 = up
    //1 = right
    //2 = down
    //3 = left

    //moves the arrow down to First Name
    if (vertical_current == 7 && x == 2){
        vertical_current = 9;
        return x;
    }
    //moves the arrow down to Last Name
    if (vertical_current == 9 && x == 2){
        vertical_current = 11;
        return x;
    }
    //moves the arrow down to Email
    if (vertical_current == 11 && x == 2){
        vertical_current = 13;
        return x;
    }
    //moves the arrow down to Phone #
    if (vertical_current == 13 && x == 2){
        vertical_current = 15;
        return x;
    }


    //moves the arrow up to Email
    if (vertical_current == 15 && x == 0){
        vertical_current = 13;
        return x;
    }
    //moves the arrow up to Last Name
    if (vertical_current == 13 && x == 0){
        vertical_current = 11;
        return x;
    }
    //moves the arrow up to First Name
    if (vertical_current == 11 && x == 0){
        vertical_current = 9;
        return x;
    }
    //moves the arrow up to Username
    if (vertical_current == 9 && x == 0){
        vertical_current = 7;
        return x;
    }

    return x;
}

void UserSettings::enterOption(){
    if (vertical_current == 9){
        //Change first name
        //Call change first name method
        test_message.clear();
        test_message = "Change First Name";
    }
    if (vertical_current == 11){
        //Change last name
        //Call change last name method
        test_message.clear();
        test_message = "Change Last Name";
    }
    if (vertical_current == 13){
        //Change email
        test_message.clear();
        //Call change email method
        test_message = "Change Email";
    }
    if (vertical_current == 15){
        //Change phone number
        test_message.clear();
        //Call change phone number method
        test_message = "Change Phone Number";
    }
}
