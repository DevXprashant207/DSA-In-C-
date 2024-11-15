#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     int sum = 0;
     int a = 1, b = 1;
     for(int i=1; i<=n-2; i++){
           sum = a + b;
           a = b;
           b = sum;
     }
     cout<<n<<"th fabonacci number is : "<<b;
     // if(n==1 || n==2) cout<<n<<"th fabonacci number is : "<<1;
     // else cout<<n<<"th fabonacci number is : "<<sum;

}