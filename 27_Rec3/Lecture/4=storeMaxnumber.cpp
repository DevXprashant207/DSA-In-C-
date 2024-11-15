#include<iostream>
#include<climits>
using namespace std;
int printMax(int arr[],int n,int idx){
     if(idx==n ) return INT_MIN;
     return max(arr[idx],printMax(arr,n,idx+1));
}
int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     int arr[n];
     cout<<"Enter elements of array : ";
     for(int i=0; i<n; i++){
          cin>>arr[i];
     }
     cout<<"Maximum number is : "<<printMax(arr,n,0);
     
}
