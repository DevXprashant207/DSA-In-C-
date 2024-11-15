#include<iostream>
#include<vector>
using namespace std;
void subset(int idx,vector<int> ans,vector<int>& v){
     if(idx==v.size()){
          cout<<"{";
          for(int i=0; i<ans.size();i++){
               cout<<ans[i]<<"";
          }
          cout<<"}";
          cout<<endl;
          return;
     }
     int p = v[idx];
     subset(idx+1,ans,v); 
     ans.push_back(p);
     subset(idx+1,ans,v);
}
int main(){
     int n,x;
     cout<<"Enter size of array : ";
     cin>>n;
     cout<<"Enter array : ";
     vector<int> v(n);
     for(int i=0; i<n ;i++){
          cin>>v[i];
     }
     vector<int> ans;
     subset(0,ans,v);     
}