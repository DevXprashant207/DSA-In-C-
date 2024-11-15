#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number(odd) : ";
     cin>>n;
     int nsp = n-1;
     int nst = 1;
     for(int i=1; i<=2*n-1; i++){
           for(int j=1; j<=nsp; j++) cout<<"  ";
           for(int l=1; l<=nst; l++) cout<<"* ";
           if(i<n){
               nsp--;
               nst+=2;
           }
           else{
               nsp++;
               nst-=2;
           }
          cout<<endl;
          // if(i<=n){
          //      for(int j=1; j<=nsp; j++) cout<<"  ";
          //      nsp--;
          // }
          // else{// means i>n nsp = 0
          //      for(int k=1; k<=nsp+2; k++) cout<<"  ";
          //      nsp++;
          // }
          // if(i<=n){
          //      for(int l=1; l<=nst; l++) cout<<"* ";
          //      nst+=2;
          // }
          // else{// means i>n nst = 2*n-1     
          //      for(int m=1; m<=nst-4; m++) cout<<"* ";
          //      nst-=2;
          // }
     }
}