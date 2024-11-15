#include<iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter size of array : ";
   cin>>size;
   int arr[size];
   for(int i=0; i<=size-1; i++){
     cin>>arr[i];
   }
  int x;
  cout<<"Enter number : ";
  cin>>x;
  int count = 0;
  for(int i=0; i<=size-1; i++){
     if(arr[i]>x){
         count++;
     }
   }
   cout<<"No of elments in array is greater than "<<x<<" is : "<<count;

}