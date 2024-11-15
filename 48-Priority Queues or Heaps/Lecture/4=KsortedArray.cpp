#include<iostream>
#include<queue>
using namespace std;
int main(){
     //int arr[] = {6,5,3,2,8,10,9};
     int arr[] = {10,9,8,7,4,70,60,50};
     int n = sizeof(arr)/sizeof(arr[0]);
     int k = 4;
     //vector<int> ans; 
     int idx = 0;
     for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     priority_queue< int, vector<int>, greater<int> >pq;
     for(int i=0; i<n; i++){
          pq.push(arr[i]);
          if(pq.size()>k){
             arr[idx++] = pq.top();
             pq.pop();
          }
     }
     while(pq.size()>0){
          arr[idx++] = pq.top();
          pq.pop();
     }
     for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
}