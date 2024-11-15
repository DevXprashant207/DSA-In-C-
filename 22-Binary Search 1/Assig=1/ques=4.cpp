#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of Array: ";
     cin>>n;
     cout<<"Enter array : ";
     vector<int> v(n);
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     int lo = 0;
     int hi = n-1;
     bool flag = false;
     while(lo<=hi){
          int mid = lo + (hi-lo)/2;
          if(v[mid]==(mid+1)){
                if(v[mid+1]==v[mid]){
                    flag = true;
                    cout<<"Repeated element is : "<<v[mid];
                    break;
                }
               else{
                    lo = mid + 1;
               }
          }
          else{//v[mid]!=(mid+1)
               hi = mid - 1;
          }
     }
     if(flag==false) cout<<"nahi mila repeated element";
}