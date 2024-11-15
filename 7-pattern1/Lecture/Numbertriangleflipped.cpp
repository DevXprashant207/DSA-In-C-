#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no of lines : ";
     cin>>n;
     for(int i=1; i<=n; i++){
          // for spaces
          for(int j=1; j<=n-i; j++){
               cout<<"  ";
          }
          // for stars
          //int a = 1;
          for(int k=1; k<=i; k++){
               cout<<k<<" ";
               //a++;
          }
          cout<<endl;
     }
}