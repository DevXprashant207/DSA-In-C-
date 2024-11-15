#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     for(int i=1; i<=n; i++){
          //int n1 = i;
          for(int j=i; j>=1; j--){
               cout<<j<<" ";
              // n1--;
          } 
         
          cout<<endl;
     }
}