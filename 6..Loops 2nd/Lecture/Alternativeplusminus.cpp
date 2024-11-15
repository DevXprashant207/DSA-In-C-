#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int sum;
     if(n%2==0) sum = -n/2;
     else sum = -n/2 + n;
     // int sum = 0;
     // for(int i =1; i<=n; i++){
     //      if(i%2!=0) sum+=i;
     //      else sum-=i;
     // }
     cout<<"Sum of series up to "<<n<<"th number is : "<<sum;
}
