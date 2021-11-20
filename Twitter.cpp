/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw4, q3
** Date Created : November 13, 2021
** Date Last Modified : November 20, 2021
** Usage : No command line arguments
**
*************************************************************************/

#include"Twitter.h"
template<class T>
Twitter<T>::Twitter():SocialMediaAccount<T>(){}

template<class T>
Twitter<T>::Twitter(T user):SocialMediaAccount<T>(user){}

