#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int sum = 0, a = 1, b = 1;
     if(n>=2) cout<<1<<" "<<1<<" ";
     else cout<<1;
     for(int i=1; i<=n-2; i++){
          sum = a + b;
          a = b;
          b = sum;
          cout<<b<<" ";
          
     }
}