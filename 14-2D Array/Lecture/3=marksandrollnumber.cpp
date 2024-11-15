#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no of students : ";
     cin>>n;
     int arr[2][n];
     int a = 0;
     for(int i=0; i<2; i++){
          if(a==0) {
               cout<<"Enter roll Number : ";
               a++;
          }
          else cout<<"Enter marks      : ";
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     int b = 0;
     for(int i=0; i<2; i++){
          if(b==0) {
               cout<<"RollNumer : ";
               b++;
          }
          else cout<<"Marks     : ";
          for(int j=0; j<n; j++){
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
}