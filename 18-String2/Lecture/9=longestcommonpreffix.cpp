#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
     int n; 
     cout<<"Enter no of string : ";
     cin>>n;
     string strs[n];
     for(int i=0; i<n; i++){
          if(i==0) cout<<"Enter "<<i+1<<"st string :  ";
          else if(i==1) cout<<"Enter "<<i+1<<"nd string :  ";
          else cout<<"Enter "<<i+1<<"th string :  ";
          cin>>strs[i];
     }
     if(n==1) cout<<strs[0];
     //sort(strs.begin(),strs.end());
     string first = strs[0];
     string last = strs[n-1];
     string s = "";
     for(int i=0; i<(min(first.size(),last.size())); i++){
               if(first[i]==last[i]){
               s += first[i];
               }
               else cout<<s;
     }
     cout<<s;
     
}     
