#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
   int n;
   cout<<"Enter size of array : ";
   cin>>n;
   vector<int>v;
   for(int i=0; i<n; i++){
     int x;
     cin>>x;
     v.push_back(x);
   }
   int max = INT_MIN;
   int smax = INT_MIN;
   int tmax = INT_MIN;
   for(int i=0; i<n; i++){
     if(max<v[i]){
          max = v[i];
     }
   }
   for(int i=0; i<n; i++){
     if(v[i]!=max && smax<v[i]){
          smax = v[i];
     }
   }
   for(int i=0; i<n; i++){
     if(v[i]!=max && v[i]!=smax && tmax<v[i]){
          tmax = v[i];
     }
   }
   cout<<"Three largest elements are "<<max<<","<<smax<<","<<tmax;
}