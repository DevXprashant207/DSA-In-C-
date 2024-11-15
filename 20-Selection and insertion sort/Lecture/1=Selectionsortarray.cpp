#include<iostream>
#include<vector>
#include<climits>
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
     // selection sort
     for(int i=0; i<n-1; i++){
          int min = INT_MAX;
          int mindx = -1;
          // minimun element calculation from orange box
          for(int j=i; j<n; j++){
               if(min>v[j]){
                    min = v[j];
                    mindx = j;
               }
          }
          int temp = v[i];
          v[i] = v[mindx];
          v[mindx] = temp;
     }
     for(int i=0; i<n; i++){
          cout<<v[i]<<" ";
     }
}