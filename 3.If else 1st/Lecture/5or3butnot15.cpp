#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     // if((n%5==0 || n%3==0) && n%15!=0){
     //      cout<<n<<" is divisible by 5 or 3 but not 15";
     // }
     // else{
     //      cout<<" condition not matched";
     // }
     if(n%5==0 || n%3==0){
          if(n%15!=0){
               cout<<n<<" is divisible by 5 or 3 but not 15";
          }
          else{
               cout<<n<<" is divisible by 5 or 3 and also divisible by 15 ";
          }
     }
     else{
          cout<<n<<" is not divisible by 5 or 3 or 15.";
     }
}