#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     int a = 0;
     for(int i=2; i<n-1; i++){
          if(n%i==0){
               cout<<"The given Number is not a prime number ";
               break;
               a = 1;
               if(a==0) cout<<"The given Number is a prime number ";
               }
          }
     }
