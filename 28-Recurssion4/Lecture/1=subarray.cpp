#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int> ans, vector<int>& v, int idx ){
     if(idx==v.size()){
          for(int i=0; i<ans.size(); i++){
               cout<<ans[i]<<" ";
          }
          cout<<endl;
          return;
     }
     subarray(ans,v,idx+1);// left calls no elements is added
     // right calls 
     if(ans.size()==0 || v[idx-1]==ans[ans.size()-1]){
        ans.push_back(v[idx]);
        subarray(ans,v,idx+1);
     }
}
int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     vector<int> v(n);
     cout<<"Enter array : ";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     // // itrative method
     // for(int i=0; i<n; i++){
     //      for(int j=i; j<n; j++){
     //           for(int k=i; k<=j; k++){
     //                cout<<v[k];
     //           }
     //           cout<<endl;
     //      }
     // }
     // recursive method
     vector<int> ans;
     subarray(ans,v,0);
     
}