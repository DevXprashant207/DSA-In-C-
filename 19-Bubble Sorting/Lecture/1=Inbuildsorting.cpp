#include<iostream>
#include<vector>
#include<algorithm>
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
     sort(v.begin(), v.end());// tc = O(n.log(n)) 
     cout<<"The array in increasing order : ";
     for(int i=0; i<n; i++){
          cout<<v[i]<<" ";
     }
     cout<<endl;
     reverse(v.begin(),v.end());
     cout<<"The array in decresing order : ";
     for(int i=0; i<n; i++){
          cout<<v[i]<<" ";
     }
}