#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
//   vector<int> v(n,0); // 0 means not visited and v is visited array
//     int x = 0;
//     for(int i=0; i<n; i++){
//           int min = INT_MAX;
//           int minidx = -1;
//          for(int j=0; j<n; j++){
//                if(v[j]==1) continue;
//                else {
//                     if(arr[j]<min){
//                          min = arr[j];
//                          minidx = j;
//                     }
//                }
//           }
//          arr[minidx] = x;
//          v[minidx] = 1;// visited 
//          x++;
//     }
    int x = 0;
    for(int i=0; i<n; i++){
          int min = INT_MAX;
          int minidx = -1;
         for(int j=0; j<n; j++){
               if(arr[j]<=0) continue;
               else {
                    if(arr[j]<min){
                         min = arr[j];
                         minidx = j;
                    }
               }
          }
         arr[minidx] = -x;
         x++;
    } 
    for(int i=0; i<n; i++){
          arr[i] = -arr[i];
          cout<<arr[i]<<" ";
    }
    cout<<endl;
}