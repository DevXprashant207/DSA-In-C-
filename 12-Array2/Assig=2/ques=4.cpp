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
     int sum1 = 0;
     int sum2 = 0;
     for(int i=0; i<n; i++){
          if(i%2==0)sum1 += v[i];
          else sum2 += v[i];
     }
     int diff = sum1-sum2;
     if(diff<0) diff = diff * (-1);
     cout<<"Difference is : "<<diff;
     
}