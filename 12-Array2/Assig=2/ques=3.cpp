#include<iostream>
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
     int sort = v[0];
     bool flag = true;
     for(int i=0; i<n; i++){
          if(v[i+1]<sort){
               flag = false;
               break;
          }
          sort = v[i+1];
     }
     if(flag==true) cout<<"Yes, Array is sorted ";
     else cout<<"No, Array is not sorted";
}