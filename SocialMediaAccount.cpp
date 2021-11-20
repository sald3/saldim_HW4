/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw4, q2
** Date Created : November 13, 2021
** Date Last Modified : November 20, 2021
** Usage : No command line arguments
**
*************************************************************************/

#include"SocialMediaAccount.h"

template<class T>
SocialMediaAccount<T>::SocialMediaAccount(): followerCount(0), followedCount(0), privacy(false){}


template<class T>
SocialMediaAccount<T>::SocialMediaAccount(T user):handler(user), followerCount(0), followedCount(0), privacy(false){}

