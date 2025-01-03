#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minproduct(vector<int>& arr){
      int cn = 0, cp = 0, cz = 0;
      int prod_neg = 1,prod_pos = 1;
      int lar_Neg = INT_MIN;
      for(int i=0; i<arr.size(); i++){
          if(arr[i]>0){
               cp++;
               prod_pos *= arr[i];
          }
          if(arr[i]<0){
               cn++;
               prod_neg *= arr[i];
               lar_Neg = max(lar_Neg,arr[i]);
          }
          if(arr[i]==0) cz++;
      }
      if(cn==0){
          if(cz>0) return 0;
          else{
               auto it = min_element(arr.begin(),arr.end());
               return *it;
          }
      }
      else{
          if(cn%2==0){// even of -ve ele 
               return (prod_neg/lar_Neg) * prod_pos;
          }
          else{// odd no of -ve ele
               return prod_neg*prod_pos;
          }
      }
}
int main(){
      vector<int> arr{1,1,0,2,4,3};
      cout<<minproduct(arr);
}