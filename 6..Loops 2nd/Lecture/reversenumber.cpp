#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     int n1 = n;
     int reverse = 0;
     while(n!=0){
          int r = n % 10;// r for last digit
          reverse = reverse * 10 + r;
          n/=10;
     }
      cout<<"Reverse of digits of Number "<<n1<<" is "<<reverse;
}