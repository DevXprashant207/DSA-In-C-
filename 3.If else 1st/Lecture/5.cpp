#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     if(n%5==0){
          cout<<n<<" is divisiblee by 5.";
     }
     else{
          cout<<n<<" is not divisible by 5.";
     }
}