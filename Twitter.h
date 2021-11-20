#ifndef Twitter_h
#define Twitter_h

#include"SocialMediaAccount.h"
template<class T>
class Twitter:public SocialMediaAccount<T>{

public:
    Twitter();
    Twitter(T user);
    void RT();
private:
    int retweetCount;

};

#endif

