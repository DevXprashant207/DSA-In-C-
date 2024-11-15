#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0 && b==0) return -1; 
    if(a==0) return 0;
    if(b==0) return 1;
    /// int ans = power(a,b/2);
    if(b%2==0) return power(a,b/2)*power(a,b/2);
    if(b%2!=0) return power(a,b/2)*power(a,b/2)*a;
    return 0;
}
int main(){
     int a,b;
     cout<<"Enter base : ";
     cin>>a;
     cout<<"Enter power : ";
     cin>>b;
     int p = power(a,b);
     if(p!=(-1)) cout<<a<<" to the power "<<b<<" is : "<<p<<endl;
     else cout<<"0 to the power 0 is not defined";
}