TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lncurses
LIBS += -lsqlite3
SOURCES += main.cpp \
    screen.cpp \
    login.cpp \
    createuser.cpp \
    mainfeed.cpp \
    contactlist.cpp \
    ../model/user.cpp \
    ../model/dbhandler.cpp \
    ../model/log.cpp \
    usersettings.cpp

HEADERS += screen.h \
    login.h \
    createuser.h \
    mainfeed.h \
    contactlist.h \
    ../model/user.h \
    ../model/dbhandler.h \
    ../model/log.h \
    usersettings.h

DISTFILES += \
    logintest.cpp \
    screentest.cpp \
    #loginTest

LIBS += -lsqlite3

#INCLUDEPATH += ../unittest \
