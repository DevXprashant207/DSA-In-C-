#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number till where you want odd number : ";
     cin>>n;
     for( int i=1; i<n; i++){
          if(i%2==0) continue; // use to skip this round or iteration
          cout<<i<<" ";
     }
}