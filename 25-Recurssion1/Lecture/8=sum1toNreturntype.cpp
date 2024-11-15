#include<iostream>
using namespace std;
int sum(int n){
     // base case
     if(n==0) return 0;
     // recursive call
     return n+sum(n-1);
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int p = sum(n);
     cout<<"Sum of number 1 to "<<n<<" is : "<<p; 
}