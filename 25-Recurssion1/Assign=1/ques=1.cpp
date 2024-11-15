#include<iostream>
using namespace std;
int sum(int a,int b){
     if(a>b) return 0;
     if(a%2!=0) return a+sum(a+2,b);
     return sum(a+1,b);
}
int main(){
     int a,b;
     cout<<"Enter 1st Number : ";
     cin>>a;
     cout<<"Enter 2nd Number : ";
     cin>>b;
     int s = sum(a,b);
     cout<<"Sum of all odd numbers between "<<a<<" and "<<b<<" is : "<<s;
}