#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
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
     for(int i=0; i<n; i++){
          if(i%2==0)v[i]= v[i]+10;
          else v[i]=v[i]*2;
     }
     display(v);
}