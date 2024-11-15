#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     int n1 = n;
     int c = 0;
     while(n!=0){
          n /= 10;
          c++;
     }
     if(n1==0) cout<<"Number of digits in "<<n1<<" is "<<1;
     else cout<<"Number of digits in "<<n1<<" is "<<c;
}