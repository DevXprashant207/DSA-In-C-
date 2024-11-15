#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
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
     int id = n - (n/2);
     if(v[id-1]==(v[n-1]-v[id-1])) cout<<"Array can be partition into two Continuous equal sum";
     else cout<<"Array can not be partition into two Continuous equal sum";
}