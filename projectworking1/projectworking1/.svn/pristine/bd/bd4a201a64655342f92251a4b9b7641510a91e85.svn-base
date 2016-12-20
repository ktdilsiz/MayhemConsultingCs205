#!/bin/bash
# This script should be run manually by the user to create the local       # database, and flush it if it already exists.

rm -f localDB.db

sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS user (id INTEGER PRIMARY KEY,level INTEGER,username TEXT,password TEXT);"
sqlite3 localDB.db "INSERT INTO user (level,username,password) VALUES ('4','admin','admin123');"
#sqlite3 localDB.db "SELECT * FROM user;"
sqlite3 localDB.db .exit