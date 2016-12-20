#include "login.h"
#include "login.cpp"

TEST(LoginChangePosition2, CHECKUSERTEST){
    Login log;
    log.username_current = "dilsizk";
    log.password_current = "12345678";
    ASSERT_EQ(true, log.checkUser());
}

/* Checks the different conditions for the change position method
 * primarily vertical_current = 9, horizontal_current = 16
 * Changes these values accordingly to test the given cases in code
 */
TEST(LoginChangePosition0, xValue_1_vertical_16){
    Login log;
    log.vertical_current = 16;
    int x = 1;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(16, log.vertical_current);
    ASSERT_EQ(30, log.horizontal_current);
}

TEST(LoginChangePosition1, xValue_2_vertical_9){
    Login log;
    log.vertical_current = 9;
    int x = 2;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(11, log.vertical_current);
    ASSERT_EQ(16, log.horizontal_current);
}

TEST(LoginChangePosition2, xValue_3_vertical_16){
    Login log;
    log.vertical_current = 16;
    int x = 3;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(16, log.vertical_current);
    ASSERT_EQ(16, log.horizontal_current);
}

TEST(LoginChangePosition3, xValue_0_vertical_11){
    Login log;
    log.vertical_current = 11;
    int x = 0;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(9, log.vertical_current);
    ASSERT_EQ(16, log.horizontal_current);
}

TEST(LoginChangePosition4, xValue_2_vertical_11){
    Login log;
    log.vertical_current = 11;
    int x = 2;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(16, log.vertical_current);
    ASSERT_EQ(16, log.horizontal_current);
}

TEST(LoginChangePosition5, xValue_0_vertical_11){
    Login log;
    log.vertical_current = 11;
    int x = 0;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(9, log.vertical_current);
    ASSERT_EQ(16, log.horizontal_current);
}

TEST(LoginChangePosition6, xValue_2_vertical_11){
    Login log;
    log.vertical_current = 11;
    int x = 2;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(16, log.vertical_current);
    ASSERT_EQ(16, log.horizontal_current);
}

TEST(LoginChangePosition7, xValue_0_vertical_16_hori_not30){
    Login log;
    log.vertical_current = 16;
    int x = 0;
    int newPositionReturn = log.changePosition(x);
    ASSERT_EQ(x, newPositionReturn);
    ASSERT_EQ(11, log.vertical_current);
    ASSERT_EQ(16, log.horizontal_current);
}
//====================================================

//TEST(LoginLoop, continueLoopingValue){
//    Login log;
//    log.runLogin();

//}




