#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n, int idx){
     if(idx==n) return;
     cout<<arr[idx]<<"  ";
     display(arr,n,idx+1);
}
void display2(vector<int>& v,int idx){
     if(idx==v.size()) return;
     cout<<v[idx]<<"  ";
     display2(v,idx+1);
}
int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     int arr[n];
     vector<int>v(n);
     cout<<"Enter elements of array : ";
     for(int i=0; i<n; i++){
          cin>>arr[i];
          v[i] = arr[i];
     }
     cout<<"ALL elements are : ";
     //display(arr,n,0);
     display2(v,0);
}
