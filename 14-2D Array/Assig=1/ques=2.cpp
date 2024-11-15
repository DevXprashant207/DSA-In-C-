#include<iostream>
using namespace std;
int main(){
     int m;
     cout<<"Enter no of rows : ";
     cin>>m;
     int n;
     cout<<"Enter no of columns : ";
     cin>>n;
     int arr[m][n];
     cout<<"Enter 1st matrix- "<<endl;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     int brr[m][n];
     cout<<"Enter 2nd matrix- "<<endl;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>brr[i][j];
          }
     }
     cout<<"The sum of two matrix is : "<<endl;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               arr[i][j] += brr[i][j];
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }

}