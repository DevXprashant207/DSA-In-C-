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
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     cout<<"Enter second matrix : "<<endl;
     int brr[m][n];
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>brr[i][j];
          }
     }
     cout<<"The resultant matix is --"<<endl;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
              //arr[i][j] = arr[i][j] + brr[i][j];
              arr[i][j] += brr[i][j];
              cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
}