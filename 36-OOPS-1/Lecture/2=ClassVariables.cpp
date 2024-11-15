#include<iostream>
using namespace std;
class player {
     public:
     int health;// data members
     int score;
};
class calculator{
     public:
      int a;// data member
      int b;
      void sum(){// member function
          cout<<a+b<<endl;
      }
      void subtract(){
          cout<<a-b;
      }
}; 
int main(){
     #ifndef ONLINE_JUDGE
     freopen("input.text","r",stdin);
     freopen("output.text","w",stdout);
     #endif
     calculator cal;
     cal.a=900;
     cal.b=90;
     cal.sum();
     cal.subtract();
}