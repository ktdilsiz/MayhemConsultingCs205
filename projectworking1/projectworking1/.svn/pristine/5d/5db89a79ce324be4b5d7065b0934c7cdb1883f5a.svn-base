#!/bin/bash
# This script should be run manually by the user to create the local       # database, and flush it if it already exists.

# delete old database
rm -f localDB.db

# begin building new database

# build table users
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY,username TEXT,password TEXT,email TEXT,phoneno TEXT,firstname TEXT,lastname TEXT,type INTEGER);"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('dilsizk','12345678','dilsizk@lafayette.edu','4845420502','Kemal','Dilsiz','4');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('russell','12345678','tanakar@lafayette.edu','8009005454','Russell','Tanaka','4');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('stern','12345678','sternma@lafayette.edu','4845420502','Matthew','Stern','4');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('dummy1','1234','dummy1@lafayette.edu','1112223333','dummy','mate','1');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('dummy2','1234','dummy2@lafayette.edu','1112223333','dummy','mate','1');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('dummy3','1234','dummy3@lafayette.edu','1112223333','dummy','mate','1');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('dummy4','1234','dummy4@lafayette.edu','1112223333','dummy','mate','1');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('dummy5','1234','dummy5@lafayette.edu','1112223333','dummy','mate','1');"
sqlite3 localDB.db "INSERT INTO users (username,password,email,phoneno,firstname,lastname,type) VALUES ('dummy6','1234','dummy6@lafayette.edu','1112223333','dummy','mate','1');"

# build table usergroups
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS usergroups (id INTEGER PRIMARY KEY,username TEXT,groupname TEXT);"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dilsizk','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dilsizk','dummyGroup2');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dilsizk','dummyGroup3');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dummy1','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dummy1','dummyGroup2');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dummy1','dummyGroup3');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dummy2','dummyGroup2');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dummy3','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('dummy4','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO usergroups (username,groupname) VALUES ('russell','dummyGroup1');"

# build table groups
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS groups (id INTEGER PRIMARY KEY,groupname TEXT);"
sqlite3 localDB.db "INSERT INTO groups (groupname) VALUES ('dummyGroup1');"
sqlite3 localDB.db "INSERT INTO groups (groupname) VALUES ('dummyGroup2');"
sqlite3 localDB.db "INSERT INTO groups (groupname) VALUES ('dummyGroup3');"

# build table stern_messages
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS stern_messages (id_msg INTEGER PRIMARY KEY,time DATETIME,content TEXT,groupname TEXT,recipient TEXT);"
sqlite3 localDB.db "INSERT INTO stern_messages (time,content,groupname,recipient) VALUES ('2016-4-29 16:14','Hey lets hope this works','NULL','russell');"

# build table russell_messages
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS russell_messages (id_msg INTEGER PRIMARY KEY,time DATETIME,content TEXT,groupname TEXT,recipient TEXT);"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname) VALUES ('16-4-29 14:09','Test message- Adding messages to the database','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname) VALUES ('16-4-29 14:19','Im so happy adding messages to the database works!!','dummyGroup2');"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname) VALUES ('16-4-29 14:20','I am so happy adding messagees to the database works!!','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname) VALUES ('2016-4-29 14:24','This might be the final test message!','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname) VALUES ('2016-4-29 14:25','Final group message test','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname,recipient) VALUES ('2016-4-29 16:12','PLease please please work','NULL','stern');"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname,recipient) VALUES ('2016-4-29 14:29','This is dummy pm','NULL','stern');"
sqlite3 localDB.db "INSERT INTO russell_messages (time,content,groupname,recipient) VALUES ('2016-5-4 22:47','Does this work','NULL','stern');"

# build table dilsizk_messages
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS dilsizk_messages (id_msg INTEGER PRIMARY KEY,time DATETIME,content TEXT,groupname TEXT,recipient TEXT);"
sqlite3 localDB.db "INSERT INTO dilsizk_messages (time,content,groupname) VALUES ('2016-04-26 11:00:12','this is add test2','dummyGroup1');"

# build table dummy_messages
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS dummy_messages (id_msg INTEGER PRIMARY KEY,time DATETIME,content TEXT,groupname TEXT,recipient TEXT);"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:01','this is test1','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:02','this is test2','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:03','this is test3','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:04','this is test4','dummyGroup1');"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:05','this is test1','dummyGroup2');"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:06','this is test2','dummyGroup2');"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:07','this is test3','dummyGroup2');"
sqlite3 localDB.db "INSERT INTO dummy_messages (time,content,groupname) VALUES ('2016-04-26 10:00:08','this is test4','dummyGroup2');"

# build table dummyGroup1_members
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS dummyGroup1_members (id INTEGER PRIMARY KEY,username TEXT,type INTEGER);"
sqlite3 localDB.db "INSERT INTO dummyGroup1_members (username,type) VALUES ('dilsizk','4');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_members (username,type) VALUES ('russell','4');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_members (username,type) VALUES ('stern','4');"

# build table dummyGroup2_members
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS dummyGroup2_members (id INTEGER PRIMARY KEY,username TEXT,type INTEGER);"
sqlite3 localDB.db "INSERT INTO dummyGroup2_members (username,type) VALUES ('dilsizk','4');"
sqlite3 localDB.db "INSERT INTO dummyGroup2_members (username,type) VALUES ('russell','4');"
sqlite3 localDB.db "INSERT INTO dummyGroup2_members (username,type) VALUES ('stern','4');"

# build table dummyGroup1_content
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS dummyGroup1_content (id_msg INTEGER PRIMARY KEY,time DATETIME,content TEXT,sendername TEXT);"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-04-26 11:00:01','this is grouptest1','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-04-26 11:00:02','this is grouptest2','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-04-26 11:00:03','this is grouptest3','russell');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-04-26 11:00:11','this is add test2','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-04-26 11:00:12','this is add test2','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-04-26 11:00:12','this is add test2','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-4-9 1:01:01','time test','russell');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-4-9 1:01','timetest without seconds','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('16-4-29 14:09','Test message- Adding messages to the database','russell');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('16-4-29 14:20','I am so happy adding messages to the database works!!','russell');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-4-29 14:24','This might be the final test message!','russell');"
sqlite3 localDB.db "INSERT INTO dummyGroup1_content (time,content,sendername) VALUES ('2016-4-29 14:25','Final group test message','russell');"

# build table dummyGroup2_content
sqlite3 localDB.db "CREATE TABLE IF NOT EXISTS dummyGroup2_content (id_msg INTEGER PRIMARY KEY,time DATETIME,content TEXT,sendername TEXT);"
sqlite3 localDB.db "INSERT INTO dummyGroup2_content (time,content,sendername) VALUES ('2016-04-26 11:00:04','this is grouptest4','stern');"
sqlite3 localDB.db "INSERT INTO dummyGroup2_content (time,content,sendername) VALUES ('2016-04-26 11:00:05','this is grouptest5','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup2_content (time,content,sendername) VALUES ('2016-04-26 11:00:06','this is grouptest6','dilsizk');"
sqlite3 localDB.db "INSERT INTO dummyGroup2_content (time,content,sendername) VALUES ('16-4-29 14:19','Im so happy adding messages to the database works!!','russell');"

# close the db
sqlite3 localDB.db .exit