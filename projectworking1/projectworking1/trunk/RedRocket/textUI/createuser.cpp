#include "createuser.h"

CreateUser::CreateUser()
{
    horizontal_current = 16;
    vertical_current = 9;
}

void CreateUser::runCreateUser(){
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
    drawCreateUser();

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
        case KEY_LEFT:
            changePosition(3);
            break;
        case KEY_RIGHT:
            changePosition(1);
            break;
        case 27:
            continue_looping = false;
            break;
        }

        //redraws the screen every loop
        drawCreateUser();

    } while(continue_looping);
    //ncurses ends if the loop boolean turns false
    endwin();
}

void CreateUser::drawInitialCreateUser(){
    clear();
    mvprintw(6, 33, "Create User");
    mvprintw(9, 16, "Username:");
    mvprintw(11, 16, "Password:");
    mvprintw(13, 16, "User Type:");
    mvprintw(16, 16, "Create User");
    mvprintw(16, 33, "Reset");
    if (!username_current.empty()){
        mvprintw(9,25,"%s",username_current.c_str());
    }
    if (!password_current.empty()){
        mvprintw(11,25,"%s",password_current.c_str());
    }
    if (!user_type_current.empty()){
        mvprintw(13,26,"%s",user_type_current.c_str());
    }
    mvprintw(18, 16, error_message.c_str());
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

void CreateUser::drawCreateUser(){
    drawInitialCreateUser();
    drawArrow(vertical_current,horizontal_current);
}

/*!
 * \brief changePosition  Changes the location of the arrow on the screen
 * \param x Input key which corresponds to the direction
 */
int CreateUser::changePosition(const int x){

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

    //check if vertical_current is equal to 16
    //moves the arrow towards right to Reset
    if (vertical_current == 16 && x == 1){
            horizontal_current = 33;
        return x;
    }
    //moves the arrow towards left to Sign In
    if (vertical_current == 16 && x == 3){
            horizontal_current = 16;
        return x;
    }
    //moves the arrow down to Password
    if (vertical_current == 9 && x == 2){
        vertical_current = 11;
        return x;
    }
    //moves the arrow up to Username
    if (vertical_current == 11 && x == 0){
        vertical_current = 9;
        return x;
    }
    //moves the arrow down to Sign In
    if (vertical_current == 13 && x == 2){
        vertical_current = 16;
        return x;
    }
    //moves the arrow up to User Type
    if (vertical_current == 16 && x == 0 && horizontal_current != 33){
        vertical_current = 13;
        return x;
    }
    //moves the arrow down to User Type
    if (vertical_current == 11 && x == 2){
        vertical_current = 13;
        return x;
    }
    //moves the arrow up to Password
    if (vertical_current == 13 && x == 0 && horizontal_current != 33){
        vertical_current = 11;
        return x;
    }
    return x;
}

void CreateUser::enterOption(){
    if (vertical_current == 9){
        username_current.clear();
        drawInitialCreateUser();
        username_current = getString(vertical_current, horizontal_current + 9);
    }
    if (vertical_current == 11){
        password_current.clear();
        drawInitialCreateUser();
        password_current = getString(vertical_current, horizontal_current + 9);
    }
    if (vertical_current == 13){
        user_type_current.clear();
        drawInitialCreateUser();
        user_type_current = getString(vertical_current, horizontal_current + 10);
    }
    if (vertical_current == 16 && horizontal_current == 33){
        password_current.clear();
        username_current.clear();
        user_type_current.clear();
    }
    if (vertical_current == 16 && horizontal_current == 16){
        //Method to check if the username and password combo exists in the database
        if (username_current.empty()){
            error_message = "Username is empty. Please enter a username";
        }
        else {
            if (password_current.empty()){
                error_message = "Password is empty. Please enter a password";
            }
            else {
                error_message.clear();
                //Username and password match proceed as this user.
            }
        }
    }
}
