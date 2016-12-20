#ifndef SCREEN_H
#define SCREEN_H
#include "../model/dbhandler.h"
#include "../model/log.h"
#include "ncurses.h"
#include <string>
#include <vector>
//#include "../model/dbhandler.h"

//Parent class for any of the text screens.
class Screen
{
public:
    /*!
     * \brief log   Logger, for debugging purposes.
     */
    Log log;
    //current horizontal location
    int horizontal_current;
    //current vertical location
    int vertical_current;

    Screen();

    /*!
     * \brief getString
     * \param vertical_position Vertical position for moving the screen
     * \param horizontal_position Horizontal position for moving the screen
     */
    std::string getString(int vertical_position, int horizontal_position);

    /*!
     * \brief drawArrow Draws an arrow sign depending on the parameter values:
     * vertical_position and horizontal_position
     */
    void drawArrow(int vertical_position, int horizontal_position);


};

#endif // SCREEN_H
