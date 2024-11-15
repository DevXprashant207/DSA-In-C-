#include<iostream>
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
void quicksort(int arr[],int si,int ei){
     if(si>=ei)  return;
     // 5 1 8 2 5 6 3 4
     int pi = partition(arr,si,ei);
     // 4 1 3 2 5 6 3 4
     quicksort(arr,si,pi-1);
     quicksort(arr,pi+1,ei);
}
int main(){
     int arr[] = {5,1,8,2,7,6,3,4,-8};
     int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     quicksort(arr,0,n-1);
     for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
}