#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no of terms of AP : ";
     cin>>n;
     int a = 3;
     for(int i=1; i<=n; i++){
          cout<<a<<" ";
          a*=4;
     }
}