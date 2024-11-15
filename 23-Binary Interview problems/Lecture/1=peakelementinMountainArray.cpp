#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     vector<int> v(n);
     cout<<"Enter Mountain Array : ";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     int lo = 0;
     int hi = n-1;
     while(lo<=hi){
          int mid = lo + (hi-lo)/2;
          if(v[mid]>v[mid+1] && v[mid]>v[mid-1]){
               cout<<"Peak Element : "<<v[mid]<<"  Index : "<<mid;
               break;
          }
          else if(v[mid]>v[mid+1]) hi = mid - 1;
          else lo = mid + 1;
     }
     
}