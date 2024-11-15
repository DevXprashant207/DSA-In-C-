#include<iostream>
#include<vector>
using namespace std;
vector<int> mergesort(vector<int>& arr1, vector<int>& arr2){
        int m = arr1.size();
        int n = arr2.size();
        int i=0;
        int j=0;
        int k=0;
        vector<int>v(m+n);
        while( i<=m-1 && j<=n-1 ){
            if(arr1[i]>arr2[j]){
                v[k] = arr2[j];
                j++;
            }
            else{
                v[k] = arr1[i];
                i++;
            }
            k++;
        }
        if(i==m){ // nums1 ke sare elements fill ho chuke hai
            while(j<=n-1){
                v[k] = arr2[j];
                k++;
                j++;
            }
        }
         if(j==n){ // nums2 ke sare elements fill ho chuke hai
            while(i<=m-1){
                v[k] = arr1[k];
                k++;
                i++;
            }
        }
        return v;
}
int main(){
  vector<int> arr1{1,2,5,8};
  for(int i=0;i<arr1.size(); i++) cout<<arr1[i]<<" ";
  cout<<endl;
  vector<int> arr2{3,4,6,7,9,10};
  for(int i=0;i<arr2.size(); i++) cout<<arr2[i]<<" ";
  cout<<endl;
  vector<int> ans = mergesort(arr1,arr2);
  for(int i=0;i<ans.size(); i++) cout<<ans[i]<<" ";
  cout<<endl;
  return 0;
}