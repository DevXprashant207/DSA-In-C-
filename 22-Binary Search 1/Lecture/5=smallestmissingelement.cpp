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
     // binary approach O(log(n))
     int lo = 0;
     int hi = n-1;
     int ans = -1;
     while(lo<=hi){
          int mid = lo + (hi-lo)/2;
          if(v[mid]==mid) lo = mid + 1;
          else{
               ans = mid;
               hi = mid - 1;
          }
     }
     cout<<"Smallest missing element is : "<<ans;

     // linear approach O(n)
     // for(int i=0; i<=n-1; i++){
     //      if(v[i]!=i){
     //           cout<<"Smallest missing element is : "<<i;
     //           break;
     //      }
     // }
}