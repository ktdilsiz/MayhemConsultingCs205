#include "log.h"

Log::Log()
{
    std::string count_str = "";
    std::fstream reader;
    reader.open("../../../logs/count.txt");
    if(reader.is_open()) {
        std::getline(reader,count_str);
    }
    reader.close();
    count = std::stoi(count_str);
    *this << "Log started.";
}


Log::~Log() {
    std::ofstream writer;
    writer.open("../../../logs/.curr_log",std::ofstream::trunc);
    if(writer.is_open()) {
        writer << count+1;
    }
    writer.close();
    *this << "Log completed.";
}

void Log::operator <<(std::string message) {
    //code snippet from http://stackoverflow.com/questions/997512/string-representation-of-time-t
    std::time_t now = std::time(NULL);
    std::tm * ptm = std::localtime(&now);
    char buffer[32];
    // Format: Mo, 15.06.2009 20:20:00
    std::size_t timestamp = std::strftime(buffer, 32, "%a, %d.%m.%Y %H:%M:%S", ptm);
    //end code snippet

    std::ofstream writer;
    writer.open("../../../logs/"+std::to_string(count)+".log", std::ofstream::app);
    if(writer.is_open()) {
        writer << std::to_string(timestamp) <<
                  " | " << message << "\n";
    }
    writer.close();
}
