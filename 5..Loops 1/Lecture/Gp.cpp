#include<iostream>
using namespace std;
int main(){
     int a,d,n;
     cout<<"Enter first term of GP : ";
     cin>>a;
     cout<<"Enter common ratio of GP : ";
     cin>>d;
     cout<<"Enter no of terms  of GP : ";
     cin>>n;
     int x = a;
      for(int i=1; i<=n; i++){
          cout<<x<<" ";
          x*=d;
     }

}