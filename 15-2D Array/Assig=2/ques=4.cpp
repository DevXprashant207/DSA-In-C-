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
     cout<<"Enter matrix- "<<endl;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     int max = INT_MIN;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               if(max<arr[i][j]){
                    max = arr[i][j];
               }
          }
     }
     cout<<"The largest element in 2D array is : "<<max;
}