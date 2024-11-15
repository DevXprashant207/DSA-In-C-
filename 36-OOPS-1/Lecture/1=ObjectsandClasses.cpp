#include<iostream>
class player {
     public:
     int health;// data members
     int score;
};
using namespace std; 
int main(){
     #ifndef ONLINE_JUDGE
     freopen("input.text","r",stdin);
     freopen("output.text","w",stdout);
     #endif

     player prashant;// prashant and manish are objects
     // player is a class
     player Player[10];
     prashant.health = 13;
     prashant.score = 100;
     cout<<prashant.health<<endl;
     cout<<prashant.score<<endl;

     player Manish;
     Manish.health = 103;
     Manish.score = 57;
     cout<<Manish.health<<endl;
     cout<<Manish.score<<endl;
}