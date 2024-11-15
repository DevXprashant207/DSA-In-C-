#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no lines: ";
     cin>>n;
     for(int k=1; k<=2*n-1; k++) cout<<"* ";
     cout<<endl;
     int nst = n-1;
     int nsp = 1;
     for(int i=1; i<=n-2; i++){
          for(int j=1;j<=nst; j++) {
               cout<<"* ";
          }
          for(int l=1;l<=nsp; l++) {
               cout<<"  ";
          }     
          for(int m=1;m<=nst; m++){
          cout<<"* ";
          }
          nsp+=2;
          nst--;
          cout<<endl;
     }
     int m = n-1;
     nsp = 2*m-1;
     for(int i=1; i<=m; i++){
          for(int j=1;j<=i; j++) {
               cout<<"* ";
          }
          for(int l=1;l<=nsp; l++) {
               cout<<"  ";
          }     
          for(int k=1;k<=i; k++){
          cout<<"* ";
          }
          nsp-=2;
          cout<<endl;
     }
     for(int i=1; i<=2*n-1; i++) cout<<"* ";
}