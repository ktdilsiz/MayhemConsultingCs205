#include "user.h"

User::User(std::string username_input, std::string password_input, const int type_number){

    username = username_input;
    password = password_input;
    user_type = type_number;

    //int type = dump.at(1).at(1);
}

void User::userGetInfo(){
    DBHandler *db = new DBHandler(&log);
            //= *(new DBHandler::DBHandler());
    //create a vector to catch the db dump
    std::vector<std::vector<std::string> > dump;

    //build query
    std::string query = "SELECT email, phoneno, firstname, lastname, type from users where users.username = '"+username+"';";
    //run query
    dump = *(db->runQuery(query));

    email = dump.at(0).at(1);
    phoneno = dump.at(1).at(1);
    first_name = dump.at(2).at(1);
    last_name = dump.at(3).at(1);
    user_type = std::stoi (dump.at(4).at(1));

}

void User::setAlumni(){
    user_type = 1;
}

void User::setUser(){
    user_type = 2;
}

void User::setGroupLeader(){
    user_type = 3;
}

void User::setAdmin(){
    user_type = 4;
}

void User::addGroup(Group *g){
    group_list.push_back(g);
}

void User::removeGroup(Group *g){
    for (int i=0; (unsigned)i < group_list.size(); i++){
        //locate the group on the list and remove it from the vector.
    }
}
