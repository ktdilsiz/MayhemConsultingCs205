#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
#include <iostream>

#include "user.h"

class Message
{

public:
    std::string content_;
    int id_msg_;
    int user_id_;

    std::string error_;

    //null if type != 0
    int length_;

    //type 0 --> string
    //type 1 --> picture
    //type 2 --> audio
    //type 3 --> video
    int type_;

    //location for picture, audio or video
    std::string location_;

    //ANOTHER CONSTRUCTOR POSSIBLY???
    //a constructor which pulls the msg from database to create an instance
    //can be used while generating the textUI etc

    /*!
     * \brief Message(string, user) Constructor for the message
     * Stores the information such as content_, id_msg_, user_id_ and length_
     *
     * \param string                The message that will be stored, txt type
     * \param User                  The user who is the owner of the message
     */
    Message(std::string, User);

    /*!
     * \brief Message(string, int, user)
     * Constructor for the message
     * Stores the information such as content_, id_msg_, user_id_ and length_
     *
     * \param string                The location of the media being stored
     *                              Picture, audio or video
     * \param int                   The type of the message --> type_
     * \param User                  The user who is the owner of the message
     */
    Message(std::string, int, User);

    /*!
     * \brief ~Message  The destructor of the class
     */
    ~Message();

    /*!
     * \brief contain   Checks if the message contains the given string
     * Can be used for search purposes or checking rules purposes etc
     * Cannot search an empty input of ""
     *
     * \param string    The string that will be check if it is contained
     * \return string   Returns the string that has been searched if successful, otherwise null
     */
    std::string contain(std::string);

};

#endif // MESSAGE_H
