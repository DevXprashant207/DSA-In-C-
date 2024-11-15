#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no of lines : ";
     cin>>n;
     for(int i=1; i<=n; i++){
          int n1 = i;
          for(int j=1; j<=i; j++){
               cout<<n1<<" ";
               n1--;
          }
          cout<<endl;
     }
}