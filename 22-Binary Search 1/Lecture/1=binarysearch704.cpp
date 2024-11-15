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
     cout<<"Enter array in ascending order : ";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     int x;
     cout<<"Enter target element : ";
     cin>>x;
     int flag = false;
     int lo = 0;
     int hi = n-1;
     while(lo<=hi){
          int mid = lo + (hi-lo)/2;
          if(v[mid]==x) flag = true;
          else if(v[mid]<x) lo = mid + 1;
          else hi = mid -1;
     }
     if(flag==true) cout<<"Target element is present";
     else cout<<"Target elements is not preasent ";
     
}