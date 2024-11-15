#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no lines: ";
     cin>>n;
     int m = n-1;
     int nsp = 2*m-1;
     for(int i=1; i<=m; i++){
          for(int j=1;j<=i; j++) {
               cout<<"* ";
          }
          for(int l=1;l<=nsp; l++) {
               cout<<"  ";
          }     
          for(int m=1;m<=i; m++){
          cout<<"* ";
          }
          nsp-=2;
          cout<<endl;
     }
     for(int k=1; k<=2*n-1; k++) cout<<"* ";
     cout<<endl;
     for(int k=1; k<=2*n-1; k++) cout<<"* ";
     cout<<endl;
     int nst = n-1;
     nsp = 1;
     for(int i=1; i<=2*n-1; i++){
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
}