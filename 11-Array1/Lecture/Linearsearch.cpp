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
  cout<<"Enter number to search : ";
  cin>>x;
  // check marks 
  bool flag = false; // false means not present
  for(int i=0; i<=size-1; i++){
     if(arr[i]==x){
          flag = true;
          break;
     }
   }
   if(flag == true) cout<<"Yes, Number is present";
   else cout<<"No, Number is not present";

}