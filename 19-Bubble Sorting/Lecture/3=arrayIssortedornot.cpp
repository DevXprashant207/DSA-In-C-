#include<iostream>
#include<vector>
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
     bool flag = true;
     for(int i=0; i<n; i++){
          if(v[i]>v[i+1]){
               flag = false;
               break;
          }
     }
     if(flag==true) cout<<"Array is sorted";
     else cout<<"Array is not sorted";
}