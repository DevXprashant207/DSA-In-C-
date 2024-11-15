#include<iostream>
#include<string>
using namespace std;
int main(){
     // this question is similar to max ele of an array
     int n; 
     cout<<"Enter no of string : ";
     cin>>n;
     string arr[n];
     for(int i=0; i<n; i++){
          if(i==0) cout<<"Enter "<<i+1<<"st string :  ";
          else if(i==1) cout<<"Enter "<<i+1<<"nd string :  ";
          else cout<<"Enter "<<i+1<<"th string :  ";
          cin>>arr[i];
     }
     int max = stoi(arr[0]);
     string maxS = arr[0];
     int count = 0;
     for(int i=0; i<n; i++){
          int x = stoi(arr[i]);
          if(max<x){
               max = x;
               count = i;
               maxS = arr[i];
          }
     }
     cout<<"Maximum value is : "<<max<<endl;
     cout<<"Index of maximum number is : "<<count<<endl;
     cout<<"Present is : "<<maxS<<endl;
     
}
