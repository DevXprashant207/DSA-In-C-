#include<iostream>
#include<climits>
using namespace std;
int main(){
   int size;
   cout<<"Enter size of array : ";
   cin>>size;
   int arr[size];
   for(int i=0; i<=size-1; i++){
     cin>>arr[i];
   }
   //int max = arr[0];
   int max = INT_MIN;
   int smax = INT_MIN;
   for(int i=0; i<=size-1; i++){
     if(max<arr[i]){
          max = arr[i];
     }
   }
   for(int i=0; i<=size-1; i++){
     if(arr[i] != max && smax<arr[i] ){
          smax = arr[i];
     }
   }
   cout<<"Second Gretest in all elements in array is : "<<smax;

}