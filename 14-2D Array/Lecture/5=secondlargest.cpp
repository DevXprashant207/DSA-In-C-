#include<iostream>
using namespace std;
#include<climits>
int main(){
     int m;
     cout<<"Enter no of rows : ";
     cin>>m;
     int n;
     cout<<"Enter no of columns : ";
     cin>>n;
     int arr[m][n];
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     int max = INT_MIN;
     int smax = INT_MIN;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
              if(max<arr[i][j]){
                max = arr[i][j];
              }
          }
     }
     cout<<"Largest elements is : "<<max;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
              if(smax<arr[i][j] && arr[i][j]!=max){
                smax = arr[i][j];
              }
          }
     }
     cout<<"\nSecond Largest elements is : "<<smax;
}