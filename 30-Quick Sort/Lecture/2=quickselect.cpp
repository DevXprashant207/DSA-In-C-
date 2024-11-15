#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int si,int ei){
     int pivotelement = arr[(si+ei)/2];
     int count = 0;
     for(int i=si; i<=ei; i++){
          if(i==(si+ei)/2) continue;
          if(arr[i]<=pivotelement) count++;
     }
     int pivotInx = count + si;
     swap(arr[(si+ei)/2],arr[pivotInx]);
     int i=si;
     int j=ei;
     while(i<pivotInx && j>pivotInx){
          if(arr[i]<=pivotelement) i++;
          if(arr[j]>pivotelement) j--;
          else if(arr[i]>pivotelement && arr[j]<=pivotelement){
               swap(arr[i],arr[j]);
               i++;
               j--;
          }
     }
     return pivotInx;
}
int kthsmallest(int arr[],int si,int ei,int k){
     int pi = partition(arr,si,ei);
     if(pi+1==k) return arr[pi];
     else if((pi+1)<k) return kthsmallest(arr,pi+1,ei,k);// right array
     else return kthsmallest(arr,si,pi-1,k);//pi+1>k left array
}
int main(){
     int arr[] = {5,1,8,2,7,6,3,4,-8};
     int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     int k = 4;
     cout<<kthsmallest(arr,0,n-1,k);
}