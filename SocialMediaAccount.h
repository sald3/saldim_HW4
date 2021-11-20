/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw4, q2
** Date Created : November 13, 2021
** Date Last Modified : November 20, 2021
** Usage : No command line arguments
**
*************************************************************************/

#ifndef Social
#define Social
#include <iostream>
using namespace std;
const int maxFollowers=10;
const int maxFollowed=10;
template<class T>
class SocialMediaAccount{

public:
    SocialMediaAccount();
    SocialMediaAccount(T user);
    //set the follower count
    void setFollowerCount(int n){this->followerCount=n;}
//set the handler of account
    void setHandler(T user){this->handler=user;}
//get the handler of account
    T getHandler(){return this->handler;}
//set the followed Count
    void setFollowedCount(int n){this->followedCount=n;}
//get the follower count
    int getFollowerCount(){return this->followerCount;}
// get the followed count
    int getFollowedCount(){return this->followedCount;}
//set the privacy of the account
    void setPrivate(bool privacy){this->privacy=privacy;}
//get the privacy of the account
    bool getPrivate(){return this->privacy;}
//add follower to the follower array
    void addFollower(T user);
//add followed to the followed array
    void addFollowed(T user){
        if(this->followedCount<maxFollowed){
            followed[followedCount]=user;
            this->followedCount++;
        }
    }
//display the list of all flowers if the account is not private
    void displayFollowers(){
        if(!this->privacy){
            for(int i=0;i<this->followerCount;i++){
                cout<<followers[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"Account is protected can't see the required information\n";
        }
    }
// display the list of all followed if the account is not private
    void displayFollowed(){
        if(!this->privacy){
            for(int i=0;i<this->followedCount;i++){
                cout<<followed[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"Account is protected can't see the required information\n";
        }
    }
private:
    T handler;
    int * followerCount, * followedCount;
    T followers[maxFollowers];
    T followed[maxFollowed];
    bool privacy;



};

#endif

/*

• T handler (this represents the account owner)
• T followers[maxFollowers ]
• T followed[ maxFollowed]
• int followerCount to keep track of your current number of followers.
• int followedCount to keep track of your current number of followed accounts.
*/
