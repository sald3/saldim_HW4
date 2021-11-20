/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw4, q4
** Date Created : November 13, 2021
** Date Last Modified : November 20, 2021
** Usage : No command line arguments
**
*************************************************************************/

#include "Instagram.h"
template<class T>
Instagram<T>::Instagram():SocialMediaAccount<T>(){}

template<class T>
Instagram<T>::Instagram(T user):SocialMediaAccount<T>(user){}

