#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
     int p;
     cout<<"Enter size of array : ";
     cin>>p;
     cout<<"Enter array : ";
     for(int i=0; i<p; i++){
          cin>>v[i];
          // int n;
          // cin>>n;
          // v.push_back(n);
     }
     int x;
     cout<<"Enter the Number : ";
     cin>>x;
     if(x==v[p-1]){
          cout<<"Last occurence of "<<x<<" which has index : "<<p-1;
     }
     else{
     int lo;
     bool flag = false;
     for(int i=p; i<=0; i--){
               if(x==v[i]){
                    lo = i;
                    flag = true;
                    break;
               }
     }
     if(flag == true)  cout<<"Last occurence of "<<x<<" which has index : "<<lo;
     else  cout<<"Number not present";     
     }
}   
