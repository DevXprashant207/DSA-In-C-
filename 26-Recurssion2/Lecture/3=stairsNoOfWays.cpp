#include<iostream>
using namespace std;
int stairs(int n){
     if(n==2) return 2;
     if(n==1) return 1;
     return stairs(n-1)+stairs(n-2);
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int p = stairs(n);
     cout<<"No of ways to reach "<<n<<"th stair is : "<<p;
}