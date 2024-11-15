#include<iostream>
using namespace std;
int main(){
     int a,d,n;
     cout<<"Enter first term of AP : ";
     cin>>a;
     cout<<"Enter common difference of AP : ";
     cin>>d;
     cout<<"Enter no of terms  of AP : ";
     cin>>n;
     for(int i=a; i>=a+(n-1)*d; i+=d){
          cout<<i<<" ";
     }

}              