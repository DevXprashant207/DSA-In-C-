#include<iostream>
#include<vector>
#include<algorithm>
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
     // // Bubble sort
     for(int i=0; i<n; i++){ // n-1 passes happens
         // traverse
         for(int j=0; j<n-1-i; j++){
            if(v[j]==0){
               // swap
               int temp = v[j];
               v[j] = v[j+1];
               v[j+1] = temp;
               // swap(v[i],v[j+1]);
            }
         }
     }
     cout<<"Required array is : ";
     for(int i=0; i<n; i++){
          cout<<v[i]<<" ";
     }
}