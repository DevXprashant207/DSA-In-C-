#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int nst = n-1;
     int nsp = 1;
     for(int d=1; d<=2*n-1; d++) cout<<"* ";
     cout<<endl;
     for(int i=1; i<=n-1; i++){
          for(int k=1; k<=nst; k++) cout<<"* ";
          for(int j=1; j<=nsp; j++) cout<<"  ";
          for(int l=1; l<=nst; l++) cout<<"* ";
          nsp+=2;
          nst--;
          cout<<endl;
     }
}