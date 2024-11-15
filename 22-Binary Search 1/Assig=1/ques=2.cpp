#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of Array: ";
     cin>>n;
     cout<<"Enter array in ascending order : ";
     vector<int> v(n);
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     int lo = 0;
     int hi = n -1;
     while(lo<=hi){
          int mid = lo + (hi-lo)/2;
          if(v[mid]==0){
               if(v[mid+1]!=0){
                    cout<<"Number of 1's : "<<n-(mid+1);
                    break;
               }
               else { // v[mid+1]==1
                    lo = mid + 1;
               }
          }
          else {// v[mid]==1
               hi = mid - 1;
          }          
     }
}