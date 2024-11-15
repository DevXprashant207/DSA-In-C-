#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no lines: ";
     cin>>n;
     int nst = n-1;
     int nsp = 1;
     for(int i=1; i<=n; i++){
         //for(int j=1; j<=i-1; j++) cout<<"* ";
         for(int j=1; j<=2*n-1; j++){
           if(i==j || (i+j)==(2*n)) cout<<"* ";
           else cout<<"  ";
         }
          cout<<endl;
     }
}