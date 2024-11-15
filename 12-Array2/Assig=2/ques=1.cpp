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
     int p;
     cout<<"Enter number : ";
     cin>>p;
     int count = 0;
     for(int i=0; i<p; i++){
          if(v[i]>p) count++;
     }
     cout<<"Number of elements in array which are greater than "<<p<<" is : "<<count;
}