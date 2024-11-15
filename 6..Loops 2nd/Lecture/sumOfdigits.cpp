#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     int n1 = n;
     int sum = 0;
     while(n!=0){
          int r = n % 10;// r for last digit
          sum += r;
          n/=10;
     }
      cout<<"Sum of digits of "<<n1<<" is "<<sum;
}