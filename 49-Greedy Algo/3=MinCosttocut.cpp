#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
bool cmp(int x, int y){
     return x > y;
}
ll mincostcut(int n, int m, vector<ll> &x, vector<ll>  &y){
     // x = vertical, and y = horizontal
     sort(x.begin(),x.end(),cmp);
     sort(y.begin(),y.end(),cmp);
     int hz = 1, vr = 1;
     int h = 0, v =0;
     ll ans = 0;
     while(h<y.size() && v<x.size()){
          if(x[v]>y[h]){
               ans += x[v]*vr;
               hz++;
               v++;
          }
          else{
               ans += y[h]*hz;
               vr++;
               h++; 
          }
     }
     while(v<x.size()){
          ans += y[h]*hz;
          vr++;
          h++; 
     }
     while(h<y.size()){
          ans += x[v]*vr;
          hz++;
          v++; 
     }
     return ans;
}
int main(){
     vector<ll> x = {2,1,3,1,4};
     vector<ll> y = {4,1,2};
     int n = 6, m = 4;
     cout<<mincostcut(n,m,y,x);
}