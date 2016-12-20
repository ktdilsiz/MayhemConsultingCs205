#ifndef MAINFEED_H
#define MAINFEED_H
#include "screen.h"

#define WIDTH 30
#define HEIGHT 10

class MainFeed: public Screen
{
public:
    WINDOW* win_scroll;
    MainFeed();
    void runMainFeed();
    void drawMainFeed();

};

#endif // MAINFEED_H
