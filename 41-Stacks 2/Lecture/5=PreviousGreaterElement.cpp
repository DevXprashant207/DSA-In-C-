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
     int nge[n];
     stack<int> st;
     nge[n-1] = -1;
     st.push(arr[n-1]);
     for(int i=1; i<n; i++){
          while(st.size()>0 && st.top()<=arr[i]){// pop
               st.pop();
          }
          //ans
          if(st.size()==0) nge[n-1] = -1;
          else nge[i] = st.top();
          // push
          st.push(arr[i]);
     }
       for(int i=0; i<n; i++){
          cout<<nge[i]<<" ";
     }
}