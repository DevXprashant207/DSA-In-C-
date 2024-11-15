#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     vector<int> v(n);
     cout<<"Enter array : ";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     // // Bubble sort
     // for(int i=0; i<n; i++){ // n-1 passes happens
     //     // traverse
     //     for(int j=0; j<n-1-i; j++){
     //        if(v[j]>v[j+1]){
     //           // swap
     //           int temp = v[j];
     //           v[j] = v[j+1];
     //           v[j+1] = temp;
     //           //swap(v.begin(),v.end());
     //        }
     //     }
     // }
     // Bubble sort optimized
     for(int i=0; i<n; i++){ // n-1 passes happens
         // traverse
         bool flag = true;
         for(int j=0; j<n-1-i; j++){
            if(v[j]>v[j+1]){
               // swap
               swap(v[j],v[j+1]);
               // int temp = v[j];
               // v[j] = v[j+1];
               // v[j+1] = temp;
               flag = false;
            }
         }
         if(flag==true){// swap didn't happens
               break;
            }
     }
     cout<<"Sorted array is : ";
     for(int i=0; i<n; i++){
          cout<<v[i]<<" ";
     }
}