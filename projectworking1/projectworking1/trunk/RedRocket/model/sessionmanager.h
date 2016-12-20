#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H
#include "user.h"
//#include "../model/dbhandler.h"
#include "log.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class SessionManager
{


public:

    bool online_;
    Log log;
    User *current_user;
    std::string current_group;
    std::string current_recipient;
    SessionManager(string, string);
    SessionManager();
    ~SessionManager();

    void setGroup(string);
    void setRecipient(string);

    /*!
     * \brief logout  Logouts the user
     * Asks if the user would like to leave the program
     */
    void logout();

    /*!
     * \brief setOnline Sets the status of the user to online or offline
     * \param bool Users choice of being online or not
     * \return bool new state of the global variable "online_"
     */
    bool setOnline(bool);

    /*!
     * \brief updateNewsFeed  Updates the news feed page with the new posts & tweets
     * \return bool Returns true if it was successful, otherwise false
     * (Also returns false if nothing was changed?)
     */
    bool updateNewsFeed();

    /*!
     * \brief sendInvitation  Sends an invitation to the groups
     * This invitation can be accepted by any admin of the group
     * \param Group The group that will receive the invitation
     * \return string   Returns the name of the group
     */
    std::string sendInvitation(Group);

    /*!
     * \brief createGroup   The user can create a group if they have the right
     * \param string name   The name of the new group that will be created by the user
     * \return string       The name of the new group, null if unsuccessful
     */
    std::string createGroup(std::string name);

    /*!
     * \brief createMessage Creates and stores the message in the database
     * Checks if the message is valid --> length, format, not empty, group rules
     * \param string        The text of the string, usual txt message, type = 0
     * \return int         Returns type of the message, null is unsuccessful
     */
    int createMessage(std::string);

    /*!
     * \brief createMessage Creates and stores the message in the database
     * Checks if the message is valid --> length, format, not empty, group rules
     * \param string        The text of the string, usual txt message, type = 0
     * \param int           The type of the message, picture, audio or video
     * \return int          Returns type of the message, null is unsuccessful
     */
    int createMessage(std::string, int type);

    /*!
     * \brief createPost    Creates and stores the post in the database
     * Checks if the post is valid --> length, format, not empty, group rules
     * \param string        The text of the string, usual txt message, type = 0
     * \return int          Returns type of the message, null is unsuccessful
     */
    int createPost(std::string);

    /*!
     * \brief createPost Creates and stores the post in the database
     * Checks if the post is valid --> length, format, not empty, group rules
     * \param string        The text of the string, usual txt message, type = 0
     * \param int           The type of the message, picture, audio or video
     * \return int          Returns type of the message, null is unsuccessful
     */
    int createPost(std::string, int type);


    /* AT(0) --> Time column
     * AT(1) --> Sendername column
     * AT(2) --> Content of the message column
     *
     * For rows, at(0) is the header, from then on is the messages
     * GETS MESSAGES FROM THE GROUP AS A VECTOR OF VECTORS
     */
    std::vector<std::vector<std::string> > getMessagesGroup(std::string currentGroup);

    //FOR ADDING MESSAGES TO DATABASE
    /* TIME FORMAT --> 2016-04-26 11:00:03
     * currentGroup --> just the name of the group
     * message --> just what message the user inputs
     * EXAMPLE IN THE MAIN FILE
     */
    bool addMessagesGroup(std::string message, std::string currentGroup, std::string time);

    bool addMessagesDirect(std::string message, std::string currentRecipient, std::string time);

    bool addGroup(std::string groupName1);

    /* GETS THE GROUPS FOR THE SPECIFIC USER IN THE SESSION MANAGER
     * returns a vector of groups where at(0) is the header
     * starting from at(1) it is the groups of the user
     * Can be used with groupList.size() to grab all groups
     */
    std::vector<std::string> getGroups();

    std::vector<std::string> getUsers();

    //COMBINE GROUPS FROM A CERTAIN USER WITH HIS GROUPS CONTENT DATABASE TO GRAB ALL MESSAGES
    ////Look at the cpp for further ideas.
    std::vector<std::vector<std::string> > getMainFeed();

    /* RETURNS A VECTOR CONTAINING THE MESSAGES BETWEEN 2 DIFFERENT USERS
     */
    std::vector<std::vector<std::string> > getMessagesDirect(std::string user1, std::string user2);


    /* insert into dummyGroup1_content (time, content, sendername) values
     * ("2016-4-9 1:01", "timetest without seconds", "dilsizk");
     *
     * select * from dummyGroup1_content order by date(time);
     *
     *
     */
};

#endif // SESSIONMANAGER_H
