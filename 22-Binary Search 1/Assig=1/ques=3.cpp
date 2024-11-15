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
     int x;
     cout<<"Enter element : ";
     cin>>x;
     int lo = 0;
     int hi = n -1;
     bool flag = false;
     while(lo<=hi){
          int mid = lo + (hi-lo)/2;
          if(v[mid]==x){
               if(v[mid+1]!=x){
                    flag = true;
                    cout<<"Occurence position is : "<<mid;
                    break;
               }
               else {
                    lo = mid + 1;
               }
          }
          else if (v[mid]>x) hi = mid - 1;
          else lo = mid + 1;
     }
     if(flag==false) cout<< -1 <<"Nahi mila";
}