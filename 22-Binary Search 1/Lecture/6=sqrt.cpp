#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int lo = 0;
     int hi = n;
     bool flag = false;
     while(lo<=hi){
          int mid = lo + (hi-lo)/2;
          long long m = (long long)mid;
          long long y = (long long)n;
          if(m*m==y){
               flag = true;
               cout<<"Square root number is : "<<m;
               break;
          }
          else if (m*m>y) hi = mid - 1;
          else lo = mid + 1;
     }
     if(flag==false) cout<<"Square root number is : "<<hi;
}