﻿#include <iostream>
#include "dbhandler.h"
#include "sessionmanager.h"
#include "log.h"

using namespace std;

int main()
{

    //current username input
    std::string username_current = "dilsizk";
    //current password input
    std::string password_current = "12345678";

    SessionManager manager("russell", "12345678");

    //manager.addGroup("dummyGroup1");

    /* GETS THE GROUPS FOR THE SPECIFIC USER IN THE SESSION MANAGER
     * returns a vector of groups where at(0) is the header
     * starting from at(1) it is the groups of the user
     * Can be used with groupList.size() to grab all groups
     */
    //std::vector<std::string> groupList = manager.getGroups();

    //std::cout << groupList.at(1) << std::endl;

    std::vector<std::vector<std::string> > mainfeedtest = manager.getMainFeed();

    for (int k = 1 ; k <= mainfeedtest.size() ; k++){
        std::cout << "Post " + std::to_string(k) << std::endl;
        std::cout << mainfeedtest.at(0).at(k) << std::endl;
        std::cout << mainfeedtest.at(1).at(k) << std::endl;
        std::cout << mainfeedtest.at(2).at(k) << std::endl;
        std::cout << "----" << std::endl;
    }

    /* AT(0) --> Time column
     * AT(1) --> Sendername column
     * AT(2) --> Content of the message column
     *
     * For rows, at(0) is the header, from then on is the messages
     *
     */
    std::vector<std::vector<std::string> > list = manager.getMessagesGroup("dummyGroup1");

    std::vector<std::vector<std::string> > list2 = manager.getMessagesDirect("russell","stern");

    //std::cout << list.at(0).at(3) << std::endl;

    //std::cout << list2.at(0).at(1) << std::endl;

    //READ SESSIONMANAGER.H EXPLANATION BEFORE USING
    //manager.addMessagesGroup("this is add test2", "dummyGroup1", "2016-04-26 11:00:12");

    //CHECK OUT THE AUTOMATED INFORMATION GATHERER WOO
    //std::cout << manager.current_user->email << std::endl;
    //std::cout << manager.current_user->phoneno << std::endl;
    //std::cout << manager.current_user->first_name << std::endl;
    //std::cout << manager.current_user->last_name << std::endl;
    //std::cout << manager.current_user->user_type << std::endl;


    //CREATED FOR THE create METHOD TEST
    Log log;
    DBHandler *db = new DBHandler(&log);

    /* CREATING A NEW TABLE EXAMPLE
     * NEED TO CREATE NEW TABLE FOR NEW USERS
     * NEED TO CREATE 2 NEW TABLES FOR NEW GROUPS
     * db -> createTable(string input) is how the table creation works
     */
    std::string tempQuery = "create table stern_messages(id_msg    integer   primary key unique not null,"
            "time            DATETIME        not null,"
            "content         text            not null,"
            "groupname       text            not null,"
            "recipient       text"
            ");";
    //db->createTable(tempQuery);

    return 0;
}
