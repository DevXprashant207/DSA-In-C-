#include<iostream>
using namespace std;
int main(){
     // star pyramid
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int nst = 1;
     int nsp = n-1;
     for(int i=1; i<=n; i++){
          // spaces
          for(int j=1; j<=nsp; j++){
               cout<<"  "; 
          }
          nsp--;
          // stars
          for(int j=1; j<=nst; j++){
               cout<<"* ";
          }
          nst+=2;
          cout<<endl;
     }
}