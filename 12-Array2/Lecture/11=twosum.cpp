#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
     int p;
     cout<<"Enter size of array : ";
     cin>>p;
     cout<<"Enter array : ";
     for(int i=0; i<p; i++){
          int n;
          cin>>n;
          v.push_back(n);
     }
     int x;
     cout<<"Enter sum : ";
     cin>>x;
     cout<<"elements    indecies  \n";
     for(int i=0; i<p; i++){
          for(int j=i+1; j<p; j++){
               if(v[i]+v[j]==x){
                    cout<<"  ("<<v[i]<<","<<v[j]<<")   ";
                    cout<<"   ("<<i<<","<<j<<") \n";
               }
          }
     }
     
}   
