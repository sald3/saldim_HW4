/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw4, q1,q2,q3,q4,q5,q6
** Date Created : November 13, 2021
** Date Last Modified : November 20, 2021
** Usage : No command line arguments
**
*************************************************************************/
#include<iostream>
#include<string>
#include"SocialMediaAccount.h"
#include"SocialMediaAccount.cpp"
#include "Twitter.h"
#include"Twitter.cpp"
#include "Instagram.h"
#include "Instagram.cpp"

using namespace std;

struct Profile
{
int userId;
string username;
};

int main()
{
    Profile start={1, "Adam"};
    SocialMediaAccount<string> SS;
    Twitter<string> TS;
    Twitter<Profile> TP;
    Twitter<string> TS2("John");
    Twitter<Profile> Tp2(start);
    Instagram<string> IS;
    Instagram<Profile> IP;
    return 0;
}

