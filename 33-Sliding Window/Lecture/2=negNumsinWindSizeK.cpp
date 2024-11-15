#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n,k;
     cout<<"Enter Size of array : ";
     cin>>n;
     vector<int> v(n);
     cout<<"Enter elements of array : \n";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     cout<<"Enter size of Window : ";
     cin>>k;
     vector<int> ans;
     // sliding window 
     int pnidx = -1;
     for(int i=0; i<k; i++){
          if(v[i]<0){
               pnidx = i;
               break;
          }
     }
     if(pnidx==-1) ans.push_back(1);
     else ans.push_back(v[pnidx]);
     int i=1, j=k;
     while(j<n){
          if(pnidx>=i) ans.push_back(v[pnidx]);
          else{ 
               pnidx = -1;
               for(int x=i; x<=j; x++){
                    if(v[x]<0){
                         pnidx = x;
                         break;
                    } 
               }
               if(pnidx!=-1) ans.push_back(v[pnidx]);
               else ans.push_back(1);
          }
          i++;
          j++;
     }
     // brute force   
     // for(int i=0; i<=n-k; i++){
     //     for(int j=i; j<i+k; j++){
     //      if(v[j]<0) {
     //           ans.push_back(v[j]);
     //           break;
     //      }
     //     }
     // }
     cout<<"Array with negative elements is : ";
     for(int i=0; i<ans.size(); i++){
          cout<<ans[i]<<" ";
     }
}