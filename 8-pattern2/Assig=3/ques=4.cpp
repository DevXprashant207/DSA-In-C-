#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no lines: ";
     cin>>n;
     for(int k=1; k<=2*n-1; k++) cout<<(char)(k+64)<<" ";
     cout<<endl;
     int nst = n-1;
     int nsp = 1;
     for(int i=1; i<=2*n-1; i++){
          int a = 1;
          for(int j=1;j<=nst; j++) {
               cout<<(char)(a+64)<<" ";
               a++;
          }
          for(int l=1;l<=nsp; l++) {
               cout<<"  ";
               a++;
          }     
          for(int m=1;m<=nst; m++){
          cout<<(char)(a+64)<<" ";
          a++;
          }
          nsp+=2;
          nst--;
          cout<<endl;
     }
}