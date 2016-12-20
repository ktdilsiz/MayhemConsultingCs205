#include "mainfeed.h"

MainFeed::MainFeed()
{
    startx = 0;
    starty = 0;

    n_choices = 5 / sizeof(char *);
}

void MainFeed::runMainFeed2()
{
    WINDOW *menu_win;
        int highlight = 1;
        int choice = 0;
        int c;

        choiceList->push_back("Main Feed");
        choiceList->push_back("Groups");
        choiceList->push_back("Profile");
        choiceList->push_back("Settings");
        choiceList->push_back("Exit");

        initscr();
        clear();
        noecho();
        cbreak();	/* Line buffering disabled. pass on everything */
        startx = (80 - WIDTH) / 2;
        starty = (4 - HEIGHT) / 2;

        menu_win = newwin(HEIGHT, WIDTH, starty, startx);
        keypad(menu_win, TRUE);
        refresh();
        print_menu(menu_win, highlight);
        while(1)
        {	c = wgetch(menu_win);
            switch(c)
            {	case KEY_LEFT:
                    if(highlight == 1)
                        highlight = n_choices;
                    else
                        --highlight;
                    break;
                case KEY_RIGHT:
                    if(highlight == n_choices)
                        highlight = 1;
                    else
                        ++highlight;
                    break;
                case 10:
                    choice = highlight;
                    break;
                default:
                    mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'", c, c);
                    refresh();
                    break;
            }
            print_menu(menu_win, highlight);
            if(choice != 0)	/* User did a choice come out of the infinite loop */
                break;
        }
        mvprintw(23, 0, "You chose choice %d with choice string %s\n", choice, choiceList->at(choice - 1).c_str());
        clrtoeol();
        refresh();
        endwin();
}

void MainFeed::print_menu(WINDOW *menu_win, int highlight)
{
    int x, y, i;
    x = 2;
    y = 2;
    box(menu_win, 0, -1);
    for(i = 0; i < (5 / sizeof(char *)); ++i)
    {	if(highlight == i + 1) /* High light the present choice */
        {	wattron(menu_win, A_REVERSE);
            mvwprintw(menu_win, y, x, "%s", choiceList->at(i).c_str());
            wattroff(menu_win, A_REVERSE);
        }
        else
            mvwprintw(menu_win, y, x, "%s", choiceList->at(i).c_str());
        x = x + 15;
    }
    wrefresh(menu_win);
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
