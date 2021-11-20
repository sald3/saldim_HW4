/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw4, q4
** Date Created : November 13, 2021
** Date Last Modified : November 20, 2021
** Usage : No command line arguments
**
*************************************************************************/

#ifndef HW4_INSTAGRAM_H
#define HW4_INSTAGRAM_H

#include"SocialMediaAccount.h"
template<class T>
class Instagram:public SocialMediaAccount<T> {
    public:
    Instagram();
    Instagram(T user);
    void Like();
    private:
    int likeCount;


};


#endif //HW4_INSTAGRAM_H
