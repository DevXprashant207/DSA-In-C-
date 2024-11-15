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
     int pge[n];
     stack<int> st;
     pge[0] = -1;
     st.push(arr[0]);
     for(int i=1; i<n; i++){
          // push all elements smaller than arr[i]
          while(st.size()>0 && st.top()<=arr[i]){
                st.pop();
          }
          // marks anser in the pge
          if(st.size()==0) pge[i] = -1;
          else pge[i] = st.top();
          // push the arr[i]
          st.push(arr[i]);
     }
      for(int i=0; i<n; i++){
          cout<<pge[i]<<" ";
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