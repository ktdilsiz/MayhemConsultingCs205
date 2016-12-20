#ifndef POST_H
#define POST_H
#include <string>

#include "user.h"

class Post
{
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

public:
    Post(std::string, User);
    Post(std::string, int, User);
    ~Post();

    std::string contain(std::string);

};

#endif // POST_H
