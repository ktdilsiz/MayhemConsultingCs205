﻿#ifndef USER_H
#define USER_H
#include <vector>
#include "group.h"
#include "../model/dbhandler.h"
#include "log.h"
#include <string>
class Group;

class User
{
public:

    Log log;

    int user_id;
    std::string username;
    std::string password;

    std::string email;
    std::string phoneno;
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    int user_type;

    void userGetInfo();

    /*!
     * \brief group_list Vector that stores which groups this user belongs to.
     */
    std::vector<Group*> group_list;

    std::vector<User*> contacts_list;

    /*!
     * \brief User Creates a user and gives the user certain permissions based on the
     * int parameter. 1 = Alumni, 2 = Average User, 3 = Group Leader, 4 = Admin.
     * \param user_type
     */
    User(std::string, std::string, const int user_type);

    /*
     * Methods for setting the users permission level. These should only be accessed by
     * Admins (Permission level of 4).
     */
    /*!
     * \brief setAdmin Sets the user's user_type to 4.
     */
    void setAdmin();
    /*!
     * \brief setGroupLeader Sets the user's user_type to 3.
     */
    void setGroupLeader();
    /*!
     * \brief setUser Sets the user's user_type to 2.
     */
    void setUser();
    /*!
     * \brief setAlumni Sets the user's user_type to 1.
     */
    void setAlumni();

    /*
     * Methods about groups
     */
    //Methods to remove a group from the users group list
    void removeGroup(Group *g);
    //Method to add groups to the users groupd list
    void addGroup(Group *g);
    //Adds all group members to the user's contact list
    void getContacts(Group *g);

};

#endif // USER_H
