#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     // for(int i=1; i<=n; i++){
     //      if(i%2==0) cout<<i<<" "; 
     // }
     // loop running n times
     for(int i=2; i<=n; i+=2){
         cout<<i<<" "; 
     } 
     // loop running n/2 times
}