#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
     int arr[] = {100,80,60,81,70,60,75,85};
     int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     // using stack : pop , ans , push
     // S.C = O(n), T.C = O(1)
     int pgeIdx[n];
     stack<int> st;
     pgeIdx[0] = -1;
     st.push(0);
     for(int i=1; i<n; i++){
          // push all elements smaller than arr[i]
          while(st.size()>0 && arr[st.top()]<=arr[i]){
                st.pop();
          }
          // marks anser in the pgeIdx
          if(st.size()==0) pgeIdx[i] = -1;
          else pgeIdx[i] = st.top();
          // push the arr[i]
          st.push(i);
     }
     int span[n];
      for(int i=0; i<n; i++){
          span[i] = i-pgeIdx[i];
          cout<<span[i]<<" ";
     }
}