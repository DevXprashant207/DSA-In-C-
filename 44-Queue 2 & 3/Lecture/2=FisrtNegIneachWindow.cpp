#include<iostream>
#include<queue>
using namespace std;
int main(){
   int arr[] = {1,-4,-6,6,8,-9,3,-7,-4,-45,8,3,9,5-3};
   int n = sizeof(arr)/sizeof(arr[0]);
   int k = 3;
   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   queue<int> q;
   vector<int> ans;
   for(int i=0; i<n ; i++){
      if(arr[i]<0) q.push(i);
   }
   int i = 0;
   while(i+k<=n){
      while(q.size()>0 && q.front()<i) q.pop();
      if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
      else ans.push_back(arr[q.front()]);
      i++;
   }
   for(int i=0; i<ans.size(); i++){
     cout<<ans[i]<<" ";
   }
   cout<<endl;
}