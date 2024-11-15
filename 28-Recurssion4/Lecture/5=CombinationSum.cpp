#include<iostream>
#include<vector>
using namespace std;
void combination(vector<int>& v,int x,vector<int> ans, int idx){
     if(x==0){
          for(int i=0; i<ans.size(); i++){
               cout<<ans[i]<<" ";
          }
          cout<<endl;
          return;
     }
     if(x<0) return;
     for(int i=idx; i<v.size(); i++){
          ans.push_back(v[i]);
          combination(v,x-v[i],ans,i);
          ans.pop_back();
     }
}
int main(){
    int n,x;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array : ";
    vector<int>v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    cout<<"Enter target : ";
    cin>>x;
    vector<int> ans;
    combination(v,x,ans,0);
}