#include<iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter size of array : ";
   cin>>size;
   int arr[size];
   int sum = 0;
   int product = 1;
   cout<<"Enter array : ";
   for(int i=0; i<=size-1; i++){
     cin>>arr[i];
     sum += arr[i];
     product *= arr[i];
   }
   cout<<"Sum of all elements is : "<<sum;
   cout<<"\nProduct of all elements is : "<<product;
}