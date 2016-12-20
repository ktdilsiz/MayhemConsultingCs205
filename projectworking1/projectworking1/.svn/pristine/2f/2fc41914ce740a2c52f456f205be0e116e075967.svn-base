#include "mainfeed.h"

MainFeed::MainFeed()
{

}

void MainFeed::runMainFeed(){
    //initial setup for ncurses
    initscr();
    curs_set(0);
    cbreak();
    noecho();
    //scrollok(win_scroll,TRUE);
    scrollok(stdscr,TRUE);
    //win_scroll = newwin(20,60,0,0);
    //keypad setup for getch()
    //keypad(win_scroll, TRUE);
    keypad(stdscr, TRUE);

    clear();

    //looping boolean is set to continue looping until exiting
    bool continue_looping = true;

    //drawing screen method is called for initial draw
    drawMainFeed();

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
        case KEY_DOWN:
            scrl(1);
            break;
        case KEY_UP:
            scrl(-1);
            break;
        case 27:
            continue_looping = false;
            break;
        }

    } while(continue_looping);
    //ncurses ends if the loop boolean turns false
    delwin(win_scroll);
    endwin();
}

void MainFeed::drawMainFeed(){
    //wrefresh(win_scroll);
    for (int i=4; i < 20; i++){
        //mvwprintw(win_scroll,i,5,"%d",i);
        mvprintw(i,5,"%d",i);
    }
}
