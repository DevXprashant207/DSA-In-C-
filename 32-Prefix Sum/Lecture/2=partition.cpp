#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n,id=0;
     cout<<"Enter size of array : ";
     cin>>n;
     vector<int> v(n);
     cout<<"Enter Array :\n";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     // logic
     for(int i=1; i<n ; i++){
          v[i] += v[i-1];
     }
     // check any partition
     bool flag =  false;
     for(int i=1; i<n ; i++){
          if(2*v[i]==v[n-1]){
               flag =  true;
               id = i;
               break;
          }
     }
     if(flag==true) cout<<"Yes, it can be partition at index "<<id;
     else cout<<"No, it i=can not be possible";
}