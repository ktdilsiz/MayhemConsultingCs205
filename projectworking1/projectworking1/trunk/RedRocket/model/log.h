#ifndef LOG_H
#define LOG_H
#include <ctime>
#include <fstream>
#include <string>

class Log
{
public:
    /*!
     * \brief Log Constructor for the Log class
     * Opens the log file and starts the input to the "count.txt"
     */
    Log();

    /*!
     * \brief ~Log  Destructor of the Log class
     * Writes the the decided lines to the "count.txt" log and finalizes the log
     */
    ~Log();

    /*!
     * \brief operator<< Operator used to input lines into the log
     * Generates a timestamp to distinguish the log time
     * Writes into a newly generated log file
     */
    void operator <<(std::string message);
private:
    int count;

};

#endif // LOG_H
