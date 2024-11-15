#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no of students : ";
     cin>>n;
     int arr[n];
     // input
     cout<<"Enter marks of students : ";
     for(int i=0; i<=n-1; i++){
          cin>>arr[i];
     }
     //output
     for(int i=0; i<=n-1; i++){
          if(arr[i]<35){
               cout<<i<<" ";
          }
     }
     
}