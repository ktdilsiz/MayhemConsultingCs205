#ifndef DBHANDLER_H
#define DBHANDLER_H
#include <algorithm>
#include <sqlite3.h>
#include <vector>
#include <cstring>
#include "log.h"

#include <iostream>

/* Class to handle interaction with the local test database in the /db_tools directory.  Run ./newDB.sh in that directory prior to use. */
class DBHandler {

public:

    /* Constructor to create DBHandler object. */
    /*!
     * This object should ALWAYS be destroyed by its destructor when use is done.  The constructor only opens a connection to the local database.
     */
    DBHandler(Log* log);
    /* Destructor to prevent memory leaks from this object. */
    /*!
     * Important that this is called, as it is otherwise vulnerable to causing multiple memory leaks.
     */
    ~DBHandler();
    /* Runs a query to the database and returns the output in a formatted vector. */
    /*!
     * This method formats the query, passed as a string, into a prepared statement to be processed.
     * \param query The query to the database. Must be nul-terminated (ending in \0) with no whitespace between the end of the query and the zero-terminator.
     * \return Returns a vector, where each index holds a vector per column, whose 0 index is the column name and all following indices are entries in order of their row.
     */
    //this one runs the SELECT inputs
    std::vector<std::vector<std::string> >* runQuery(std::string query);
    //was originally used for the groups.db now may be same as runQuery
    //However didnt wanna risk changing it
    std::vector<std::vector<std::string> >* runQueryMessages(std::string query);
    //This is for using INSERT input for the database
    bool runAddQuery(std::string query);
    //This is for using CREATE input for the database
    bool createTable(std::string query);

private:
    Log* log_;
    sqlite3* db_connection_;   /** Database connection object. **/
    std::vector<std::vector<std::string> > return_matrix_;  /** Pointer to the matrix containing the evaluation of the prepared statement. **/
    /* Fills each column vector in the return matrix with the entries from the most recent step of the prepared statement. */
    static int callback(void *matrix, int cols, char **text, char **colNames);

};

#endif // DBHANDLER_H
