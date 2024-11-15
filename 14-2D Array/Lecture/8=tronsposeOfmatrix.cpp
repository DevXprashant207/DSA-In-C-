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
     cout<<"Transpose of matrix is : "<<endl;
     // this the column wise printing
     int brr[n][m];
     for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
               brr[i][j] = arr[j][i];
               cout<<brr[i][j]<<" ";
          }
          cout<<endl;
     }
     
}