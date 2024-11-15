#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no lines: ";
     cin>>n;
     int nsp = n-1;
     int nst = 1;
     for(int i=1; i<=n; i++){
          for(int j=1; j<=nsp; j++) cout<<"  ";
          nsp--;
          for(int k=i; k>=1; k--) cout<<(char)(k+64)<<" ";
          nst+=2;
          if(i>=2){
               int n1 = 2;
               for(int m=1; m<=i-1; m++){
                    cout<<(char)(n1+64)<<" ";
                    n1++;
               }
          }
          cout<<endl;
     }
}