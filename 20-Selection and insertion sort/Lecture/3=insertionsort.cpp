#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     vector<int> v(n);
     cout<<"Enter array : ";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     // insertion sort
     for(int i=1; i<n; i++){
          int j = i;
          // while(j>=1){
          //      if(v[j]>=v[j-1]) break;
          //      if(v[j]<v[j-1]){
          //           int temp = v[j];
          //           v[j] = v[j-1];
          //           v[j-1] = temp;
          //           j--;
          //      }
          // }
          while(j>=1 && v[j]<v[j-1]){
                    int temp = v[j];
                    v[j] = v[j-1];
                    v[j-1] = temp;
                    j--;
          }
     }
     for(int i=0; i<n; i++){
          cout<<v[i]<<" ";
     }
}