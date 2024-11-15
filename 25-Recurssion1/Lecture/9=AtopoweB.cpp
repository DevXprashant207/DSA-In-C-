#include<iostream>
using namespace std;
int power(int a,int b){
     if(a==0 && b==0 ){
          cout<<"Not defined";
          return 0;
     }
     if(a==0) return 0;
     if(b==0) return 1;
     return a * power(a,b-1);
}
int main(){
     int a,b;
     cout<<"Enter base : ";
     cin>>a;
     cout<<"Enter power : ";
     cin>>b;
     int p = power(a,b);
     // int p = 1;
     // for(int i=1; i<=b; i++){
     //      p *= a;
     // }
     cout<<a<<" to the power "<<b<<" is : "<<p;
}