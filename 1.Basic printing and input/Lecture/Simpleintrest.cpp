#include<iostream>
using namespace std;
int main(){
     int p;
     cout<<"Enter Price : ";
     cin>>p;
     int r;
     cout<<"Enter Rate : ";
     cin>>r;
     int t;
     cout<<"Enter Time : ";
     cin>>t;
     int si = (p * r * t)/100;
     cout<<"The simple intrest is : "<<si;
}