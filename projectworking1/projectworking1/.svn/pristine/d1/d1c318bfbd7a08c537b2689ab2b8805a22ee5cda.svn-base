#ifndef GROUP_H
#define GROUP_H
#include <vector>
#include <string>
#include "user.h"

class User;

class Group
{
public:

    /*!
     * \brief user_list Vector list that holds the users in the group
     */
    std::vector<User> user_list;

    /*!
     * \brief *admin Creator of the group, the main admin
     * Needs to be reassigned if the creator decides to leave the group
     */
    User *admin;

    /*!
     * \brief Group Creates a group if the user has access for creating groups
     * \param group_name Name of the newly created group
     * \param rule1 possible feature for group rules --1
     * \param rule2 possible feature for group rules --2
     */
    Group(std::string group_name);

    /*!
     * \brief modifyGroupRules Modifies the group rules, all must be modified together
     * \param rule1 possible feature for group rules --1
     */
    std::string modifyGroupRules();

    /*!
     * \brief modifyGroupName Modifies the group name
     * \param group_name The new group name
     */
    std::string modifyGroupName(std::string group_name);

};

#endif // GROUP_H
