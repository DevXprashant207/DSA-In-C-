#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
     int arr[] = {3,1,2,5,4,6,2,3};
     int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     // using stack : pop , ans , push
     // S.C = O(n), T.C = O(1)
     int nge[n];
     stack<int> st;
     nge[n-1] = -1;
     st.push(arr[n-1]);
     for(int i=n-2; i>=0; i--){
          // push all elements smaller than arr[i]
          while(st.size()>0 && st.top()<=arr[i]){
                st.pop();
          }
          // marks anser in the nge
          if(st.size()==0) nge[i] = -1;
          else nge[i] = st.top();
          // push the arr[i]
          st.push(arr[i]);
     }
      for(int i=0; i<n; i++){
          cout<<nge[i]<<" ";
     }

     // // Brute Force
     // vector<int> ans(n,-1);
     // for(int i=0; i<n-1; i++){
     //      for(int j=i+1; j<n; j++){
     //           if(arr[j]>arr[i]){
     //                ans[i] = arr[j];
     //                break;// this break is responsible for only braeking of inside loop
     //           }
     //      }
     // }
     // for(int i=0; i<n; i++){
     //      cout<<ans[i]<<" ";
     // }
}