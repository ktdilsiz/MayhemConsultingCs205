TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lncurses
LIBS += -lsqlite3

SOURCES += main.cpp \
           #../textUI/screen.cpp \
           ../model/dbhandler.cpp \
    #../model/user.cpp \
    ../model/log.cpp \

INCLUDEPATH += googletest                       \
                       googletest/src                   \
                       googletest/src/gtest             \
                       googletest/include               \
                       googletest/include/gtest         \
                       googletest/include/gtest/internal\
                       ../textUI                        \
                       ../model

        LIBS +=  -L/usr/lib -Wall -Wextra -pthread

        SOURCES += "googletest/src/gtest.cc"            \
                   "googletest/src/gtest-death-test.cc" \
                   "googletest/src/gtest-filepath.cc"   \
                   "googletest/src/gtest-port.cc"       \
                   "googletest/src/gtest-printers.cc"   \
                   "googletest/src/gtest-test-part.cc"  \
                   "googletest/src/gtest-typed-test.cc" \


HEADERS += ../textUI/screen.h \
            ../model/dbhandler.h \
    ../model/user.h \
    ../model/log.h \




