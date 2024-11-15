#include<iostream>
using namespace std;
int stairs(int n){
     if(n==1) return 1;
     return stairs(n-1)+stairs(n-2)+stairs(n-3);
}
int main() {
     int n;
     cout<<"No of  stairs : ";
     cin>>n;
     int nw = stairs(n);
     cout<<"No of ways to reach "<<n<<"th stairs is : "<<nw;
}