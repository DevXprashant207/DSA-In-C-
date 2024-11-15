#include<iostream>
using namespace std;
class player {
     private : 
     int health;// data members
     int score;
     public :
     // setter
     void sethealth(int h){
          health = h;
     }
     void setscore(int s){
          score = s;
     }
     // getter
     int gethealth(){
          return health;
     }
     int getscore(){
          return score;
     }
}; 
int main(){
     #ifndef ONLINE_JUDGE
     freopen("input.text","r",stdin);
     freopen("output.text","w",stdout);
     #endif
     player prashant;
     prashant.setscore(299);
     prashant.sethealth(900);
     cout<<prashant.getscore()<<endl;
     cout<<prashant.gethealth()<<endl;    
}