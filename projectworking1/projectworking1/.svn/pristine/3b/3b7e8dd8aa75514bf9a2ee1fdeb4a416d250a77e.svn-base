#ifndef MAINFEED_H
#define MAINFEED_H
#include "screen.h"
#include <stdio.h>
#include <ncurses.h>
#include <vector>

#define WIDTH 79
#define HEIGHT 5

class MainFeed: public Screen
{
public:
    WINDOW* win_scroll;
    MainFeed();
    void runMainFeed();

    //Currently runMainFeed2() does not work, tried to implement a highlight system
    void runMainFeed2();
    void drawMainFeed();

    void print_menu(WINDOW *menu_win, int highlight);

    int startx;
    int starty;

    std::vector<std::string> *choiceList;

    int n_choices;
};

#endif // MAINFEED_H
