#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int n1 = 0;// for reverse
     int sum = 0, sum1 = 0;
     while(n!=0){
          int ld = n % 10;
          n1 = n1*10 + ld;
          sum+=ld;
          n/=10;
     }
      cout<<sum<<" "<<n1;
    
}