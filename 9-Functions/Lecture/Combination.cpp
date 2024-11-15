#include<iostream>
using namespace std;
int fact(int x){
     int f = 1;
     for(int i=1; i<=x; i++){
          f = f * i;
     }
     return f;
}
void combination(int n, int r){
     int ncr = fact(n)/(fact(r)*fact(n-r));
     cout<<"Combination is : "<<ncr;
}
int main(){
     int n,r;
     cout<<"Enter n : ";
     cin>>n;
     cout<<"Enter r : ";
     cin>>r;
     combination(n, r);
}