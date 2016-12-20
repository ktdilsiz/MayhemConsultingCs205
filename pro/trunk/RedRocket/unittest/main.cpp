#include <iostream>
#include <vector>

#include "gtest/gtest.h"

/* textUI testFiles
 */
#include "logintest.cpp"
#include "screentest.cpp"

/* model test files
 *
 */
#include "grouptest.cpp"
#include "usertest.cpp"
#include "sessionmanagertest.cpp"
#include "logtest.cpp"
#include "messagetest.cpp"
#include "posthistorytest.cpp"
#include "posttest.cpp"
#include "dbhandlertest.cpp"

/* controller test files
 *
 */

//includes here

/* graphicalUI test files
 *
 */

//includes here

using namespace std;

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
