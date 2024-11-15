#include<iostream>
using namespace std;
int main(){
     int a, b;
     cout<<"Enter Base : ";
     cin>>a;
     cout<<"Enter Power : ";
     cin>>b;
     if(a==0 && b==0) cout<<"This is not defined ";
     else {
           int n1 = b;
     bool flag = true; // true means postive power
     if(b<0){
          flag = false;// false means negative power
          b = -b;
     }
     float power = 1;
     for(int i=1; i<=b; i++) power*=a;
     if(flag==false) power = 1 / power;
     cout<<"base "<<a<<" to the power "<<n1<<" is : "<<power;
     }
}