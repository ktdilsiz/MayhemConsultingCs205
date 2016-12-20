#include "dbhandler.h"


DBHandler::DBHandler(Log *log)
{
    log_ = log;
}

int DBHandler::callback(void* matrix, int cols, char **text, char **colNames) {
    //loop through each column in current row
    for(int i=0; i<cols; i++) {
        //check if we need to create a vector for a column
        try{
            ((std::vector<std::vector<std::string> >*)matrix)->at(i);
        } catch (...) {
            std::vector<std::string> to_add;
            ((std::vector<std::vector<std::string> >*)matrix)->push_back(to_add);
        }
        //get data from output
        std::string col_name = colNames[i];
        std::string entry = text[i];
        //check if output is null
        if(colNames[i] == nullptr) {
            col_name = "NULL";
        }
        if(text[i] == nullptr) {
            entry = "NULL";
        }
        //store column name in matrix
        if(((std::vector<std::vector<std::string> >*)matrix)->at(i).size() == 0) {
            ((std::vector<std::vector<std::string> >*)matrix)->at(i).push_back(col_name);
        }
        //store row data in matrix;
        ((std::vector<std::vector<std::string> >*)matrix)->at(i).push_back(entry);
    }
    return 0;
}

static int callback2(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

std::vector<std::vector<std::string> >* DBHandler::runQuery(std::string query) {
    //open database connection
    sqlite3_open("../../../db_tools/localDB.db", &db_connection_);
    //log
    *log_ << "DBHandler: Connection to local db opened";
    //create variables to be used in exec function
    char* error = 0;
    //pointer so static function callback can access matrix
    std::vector<std::vector<std::string> >* matrix_ptr = &return_matrix_;
    //execute query
    int result_code = sqlite3_exec(db_connection_,query.c_str(),callback,matrix_ptr,&error);
    //close the database connection
    sqlite3_close(db_connection_);
    //log
    *log_ << "DBHandler: Database connection closed";
    //return the filled matrix
    return(new std::vector<std::vector<std::string> >(return_matrix_));
}

bool DBHandler::runAddQuery(std::string query){
       char *zErrMsg = 0;
       int rc;
       bool dump;

       /* Open database */
       rc = sqlite3_open("../../../db_tools/localDB.db", &db_connection_);
       if( rc ){
          fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db_connection_));
          exit(0);
       }else{
          fprintf(stderr, "Opened database successfully\n");
       }

       /* Execute SQL statement */
       rc = sqlite3_exec(db_connection_, query.c_str(), callback2, 0, &zErrMsg);
       if( rc != SQLITE_OK ){
          fprintf(stderr, "SQL error: %s\n", zErrMsg);
          sqlite3_free(zErrMsg);
          dump = false;
       }else{
          fprintf(stdout, "Records created successfully\n");
          dump = true;
       }
       sqlite3_close(db_connection_);
       return dump;
}

bool DBHandler::createTable(std::string query){
       char *zErrMsg = 0;
       int rc;
       bool dump;

       /* Open database */
       rc = sqlite3_open("../../../db_tools/localDB.db", &db_connection_);
       if( rc ){
          fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db_connection_));
          exit(0);
       }else{
          fprintf(stderr, "Opened database successfully\n");
       }

       /* Execute SQL statement */
       rc = sqlite3_exec(db_connection_, query.c_str(), callback2, 0, &zErrMsg);
       if( rc != SQLITE_OK ){
          fprintf(stderr, "SQL error: %s\n", zErrMsg);
          sqlite3_free(zErrMsg);
          dump = false;
       }else{
          fprintf(stdout, "Table created successfully\n");
          dump = true;
       }
       sqlite3_close(db_connection_);
       return dump;
}
