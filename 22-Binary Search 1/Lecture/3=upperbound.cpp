#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     vector<int> v(n);
     cout<<"Enter array in ascending order : ";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     int x;
     cout<<"Enter Upper bound element : ";
     cin>>x;
     int lo = 0;
     int hi = n-1;
     bool flag = false;
     while(lo<=hi){
          int  mid = lo + (hi-lo)/2;
          if(v[mid]==x){
               flag = true;
               cout<<"Result : "<<v[mid+1];
               break;
          }
          else if(v[mid]<x) lo = mid + 1;
          else hi = mid - 1;
     }
     if(flag==false) cout<<"Result : "<<v[lo];
}