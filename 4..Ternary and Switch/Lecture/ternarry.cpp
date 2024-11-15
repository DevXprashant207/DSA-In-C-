#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     // if(n%2==0)cout<<"This is a Even Number.";
     // else cout<<"This is a Odd Number.";
     n%2==0? cout<<"even": cout<<"odd";
}
