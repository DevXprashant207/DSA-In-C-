#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number: ";
     cin>>n;
     if(n>99 && n <1000) cout<<n<<" is a three digit Number.";
     else cout<<n<<" is not a three digit Number.";
}