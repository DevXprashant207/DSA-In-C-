#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     for(int i=1; i<=n; i++){
          // spaces
          for(int j=1; j<=n-i; j++){
               cout<<"  "; 
          }
          // 1 to middle
          for(int j=1; j<=i; j++){
               cout<<j<<" ";
          }
          //if(i>=2){// middle to 1
          for(int l=i-1; l>=1; l--){
                cout<<l<<" ";
          }
          cout<<endl;
     }
}