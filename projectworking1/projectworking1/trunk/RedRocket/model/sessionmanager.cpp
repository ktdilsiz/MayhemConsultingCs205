﻿#include "sessionmanager.h"
//This class will keep track of what user is currently logged in and what permissions he/she has.
SessionManager::SessionManager(string username, string password)
{
    current_user = new User(username, password, 1);

    current_user->userGetInfo();
}


SessionManager::~SessionManager(){

}

void SessionManager::setGroup(std::string groupInput){
    current_group = groupInput;
}

void SessionManager::setRecipient(std::string recipientInput){
    current_recipient = recipientInput;
}

std::vector<std::vector<std::string> > SessionManager::getMessagesGroup(string currentGroup){
        //open db connection
        DBHandler *db = new DBHandler(&log);
        //create a vector to catch the db dump
        std::vector<std::vector<std::string> > dump;
        //build query
        std::string query = "SELECT time, sendername, content from "+ currentGroup +"_content;";
        //run query
        dump = *(db->runQuery(query));
        return dump;
    }

bool SessionManager::addMessagesDirect(string message, string currentRecipient, string time){
    //open db connection
    DBHandler *db = new DBHandler(&log);
    //create a vector to catch the db dump
    bool dump;
    //build query
    std::string null = "NULL";
    std::string query = "INSERT into "+ current_user->username+ "_messages (time, content,groupname, recipient) values('"+time+"','" +message+ "','" +null+ "','" +currentRecipient + "');";
    //run query
    dump = (db->runAddQuery(query));
    return dump;
}

bool SessionManager::addMessagesGroup(string message, string currentGroup, string time){
        //open db connection
        DBHandler *db = new DBHandler(&log);
        //create a vector to catch the db dump
        bool dump;
        //build query
        std::string query = "INSERT into "+ currentGroup +"_content (time, content, sendername) values ('"+ time + "','" + message + "','" + current_user->username + "');"
                            "INSERT into "+ current_user->username+ "_messages (time, content, groupname) values('"+time+"','" +message+ "','" +currentGroup + "');";
        //run query
        dump = (db->runAddQuery(query));
        return dump;
    }

bool SessionManager::addGroup(string groupName1){
        //open db connection
        DBHandler *db = new DBHandler(&log);
        //create a vector to catch the db dump
        bool dump;
        //build query
        std::string query = "INSERT into usergroups (username, groupname) values ('"+ current_user->username+ "','" + groupName1 + "');";
        dump = (db->runAddQuery(query));
        return dump;
    }

std::vector<std::string> SessionManager::getGroups(){
    DBHandler *db = new DBHandler(&log);
    //create a vector to catch the db dump
    std::vector<std::vector<std::string> > dump;
    //build query
    std::string query = "SELECT * from usergroups where usergroups.username = '"+current_user->username+"';";
    //run query
    dump = *(db->runQuery(query));
    std::vector<std::string> groupList = dump.at(2);
    return groupList;
}

//order of columns returned: posttime, content, recipient
std::vector<std::vector<std::string> > SessionManager::getMessagesDirect(string user1, string user2) {
    //open db connection
    DBHandler *db = new DBHandler(&log);
    //create vector to catch db dump
    std::vector<std::vector<std::string> > dump;
    //build query
    std::string query = "SELECT time,content,recipient FROM " + user1 + "_messages WHERE recipient='" + user2 + "' UNION ALL SELECT time,content,recipient AS name FROM " + user2 + "_messages WHERE recipient='" + user1 + "' ORDER BY time;";
    //run query
    dump = *(db->runQuery(query));
    //return the vector
    return dump;
}

std::vector<std::string> SessionManager::getUsers(){
    DBHandler *db = new DBHandler(&log);
    //create a vector to catch the db dump
    std::vector<std::vector<std::string> > dump;
    //build query
    std::string query = "SELECT username from users;";
    //run query
    dump = *(db->runQuery(query));
    std::vector<std::string> userList = dump.at(0);
    return userList;
}

//order of columns returned: posttime,content,sendername
std::vector<std::vector<std::string> > SessionManager::getMainFeed(){
    //get all groups the current user is in
    std::vector<std::string> groups = getGroups();
    //number of groups is dynamic, need to dynamically build query
    std::stringstream ss;
    //assuming they are in at least one group
    ss << "SELECT time AS posttime,content,sendername FROM " << groups[1] << "_content";
    //loop through all groups to build query
    if(groups.size() > 2){
        for(int i=3; i<groups.size()+1; i++) {
            ss << " UNION ALL SELECT time AS posttime,content,sendername FROM " + groups[i] + "_content";
        }
    }
    //sort by time, end query
    ss << " ORDER BY posttime DESC;";
    //pass dynamically built string to a variable
    std::string query;
    query = ss.str();
    //open db connection
    DBHandler *db = new DBHandler(&log);
    //create vector to catch db dump
    std::vector<std::vector<std::string> > dump;
    //run query
    dump = *(db->runQuery(query));
    //return the vector
    return dump;
}