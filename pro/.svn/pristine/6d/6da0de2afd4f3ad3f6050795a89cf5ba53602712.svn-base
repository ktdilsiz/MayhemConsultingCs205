#include "message.h"

Message::Message(std::string input, User user)
{
    if(input != ""  && input.length() < 1000)
    {
        content_ = input;
        user_id_ = user.user_id;

        length_ = input.length();

        location_ = nullptr;
        type_ = 0;

        error_ = nullptr;

    }else{
        type_ = -1;
        error_ = "The message is empty or too long.";
    }
}

Message::Message(std::string input, int type, User user){

    if(input != "" && type < 4 && type > 0){
        content_ = nullptr;
        user_id_ = user.user_id;

        location_ = input;

        length_ = -1;

        type_ = type;
    }else{
        type = -1;
        error_ = "The type is not recognized or location is not known.";
    }
}

Message::~Message(){

}

std::string Message::contain(std::string search){

    //code snippet from http://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c
    if(content_.find(search) != std::string::npos){
        return search;
    }else{
        return nullptr;
    }
}
