#include<iostream>
#include<vector>
using namespace std;
void subset(int idx,vector<int> ans,vector<int>& v,int k){
     if(idx==v.size()){
         if(ans.size()==k){
          cout<<"( ";
          for(int i=0; i<ans.size();i++){
               cout<<ans[i]<<" ";
          }
          cout<<")";
          cout<<endl;
         }
          return;
     }
     if(ans.size()+(v.size()-idx) < k) return;// time complexity good
     int p = v[idx];
     subset(idx+1,ans,v,k); 
     ans.push_back(p);
     subset(idx+1,ans,v,k);
}
int main(){
     int n,k,x;
     cout<<"Enter size of array : ";
     cin>>n;
     cout<<"Enter array : ";
     vector<int> v(n);
     for(int i=0; i<n ;i++){
          cin>>v[i];
     }
     cout<<"Enter length : ";
     cin>>k;
     vector<int> ans;
     subset(0,ans,v,k);     
}