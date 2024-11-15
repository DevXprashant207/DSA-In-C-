#include<iostream>
using namespace std;
void num(int n,int c){
     if(n==0) return; // base case;
     cout<<c<<" ";
     num(n-1,c+1);// recursive call
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     num(n,1);
}