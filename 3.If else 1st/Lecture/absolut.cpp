#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     if(n<0) n = n * (-1);
     cout<<"The Absolute value of number is "<<n;
}