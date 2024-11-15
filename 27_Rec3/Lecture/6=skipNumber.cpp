#include<iostream>
#include<vector>
using namespace std;
void removeNum(int x,int idx,vector<int>& ans,vector<int> &v){
     if(idx==v.size()){
          cout<<"Desired Array is : ";
          for(int i=0; i<ans.size();i++){
               cout<<ans[i]<<" ";
          }
          return;
     }
     int p = v[idx];
     if(p==x) removeNum(x,idx+1,ans,v);
     else{ 
          ans.push_back(p);
          removeNum(x,idx+1,ans,v);
     }
}
int main(){
     int n,x;
     cout<<"Enter size of array : ";
     cin>>n;
     vector<int> v(n);
     for(int i=0; i<n ;i++){
          cin>>v[i];
     }
     cout<<"Enter number to skip : ";
     cin>>x;
     vector<int> ans;
     removeNum(x,0,ans,v);
}