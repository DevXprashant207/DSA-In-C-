#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int idx,int max){
     if(idx==n ){
          cout<<"Maximum number is : "<<max;
          return;
     }
     if(max<arr[idx]) max = arr[idx];
     printMax(arr,n,idx+1,max);
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
     printMax(arr,n,0,INT_MIN);
}
