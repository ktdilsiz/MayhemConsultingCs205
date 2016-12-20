#include "screen.h"

Screen::Screen()
{

}

std::string Screen::getString(int vertical_position, int horizontal_position){
    echo();
    curs_set(1);
    move(vertical_position, horizontal_position);
    char input[80];
    getstr(input);
    std::string str(input);
    curs_set(0);
    return str;
}

void Screen::drawArrow(int vertical_position, int horizontal_position){
    mvprintw(vertical_position, horizontal_position - 4, "-->");
}
