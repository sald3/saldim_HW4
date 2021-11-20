/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw4, q3
** Date Created : November 13, 2021
** Date Last Modified : November 20, 2021
** Usage : No command line arguments
**
*************************************************************************/

#ifndef Twitter_h
#define Twitter_h

#include"SocialMediaAccount.h"
template<class T>
class Twitter:public SocialMediaAccount<T>{

public:
    Twitter();
    Twitter(T user);
    void RT();
    int getRetweetCount(){return retweetCount;}
    void setRetweetCount(int retweetCount){this->retweetCount=retweetCount;}
private:
    int retweetCount;

};

#endif

