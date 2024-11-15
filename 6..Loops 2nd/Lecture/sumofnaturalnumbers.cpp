#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     // int sum = n*(n+1)/2;
     // cout<<sum;
     // using loops
     int sum = 0;
     for( int i=1; i<=n; i++) sum+=i;
     cout<<"sum from 1 to "<<n<<" is : "<<sum;
}