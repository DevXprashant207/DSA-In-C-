#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no of lines : ";
     cin>>n;
     int n1 = n;
     for(int i=1; i<=2*n-1; i++){
         if(i<=n){
          for(int k=1; k<=n-i; k++) cout<<"  ";
          for(int j=1; j<=i; j++) cout<<"* ";
         }
         else{
          for(int l=1; l<=i-n; l++) cout<<"  ";
          for(int m=1; m<=n1-1; m++) cout<<"* ";
          n1--;
         }
          cout<<endl;
     }
}