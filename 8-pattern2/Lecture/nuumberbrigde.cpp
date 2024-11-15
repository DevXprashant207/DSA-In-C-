#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int nst = n-1;
     int nsp = 1;
     for(int d=1; d<=2*n-1; d++) cout<<d<<" ";
     cout<<endl;
     for(int i=1; i<=n-1; i++){
          int a = 1;
          for(int k=1; k<=nst; k++) {
               cout<<a<<" ";
               a++;
          }
          // spaces
          for(int j=1; j<=nsp; j++){
                cout<<"  ";
                a++;
          }      
          // aage ke numbers
          for(int l=1; l<=nst; l++) {
               cout<<a<<" ";
                a++;
          }
          nsp+=2;
          nst--;
          cout<<endl;
          // // numbers 
          // for(int k=1; k<=nst; k++) {
          //      cout<<k<<" ";
          // }
          // // spaces
          // for(int j=1; j<=nsp; j++) cout<<"  ";
          // // aage ke numbers
          // int n1 = nst + nsp + 1;
          // for(int l=1; l<=nst; l++) {
          //      cout<<n1<<" ";
          //       n1++;
          // }
          // nsp+=2;
          // nst--;
          // numbers
     }
}