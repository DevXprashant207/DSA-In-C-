#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     // if(n%5==0 &&  n%3==0){
     //      cout<<n<<" is divisible by 5 and 3.";
     // }
     // else{
     //      cout<<n<<" is not divisible by 5 and 3.";
     // }
     //  if(n%15==0){
     //      cout<<n<<" is divisible by 5 and 3.";
     // }
     // else{
     //      cout<<n<<" is not divisible by 5 and 3.";
     // }
     if(n%5==0){
          if(n%3==0){
               cout<<n<<" is divisible by 5 and 3 both.";
          }
          else{
               cout<<n<<" is divisible by 5 but not 3.";
          }
     }
     else{
          cout<<n<<" is not divisible by both 5 and 3";
     }
     
}