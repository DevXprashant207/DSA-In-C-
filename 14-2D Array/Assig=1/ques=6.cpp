#include<iostream>
using namespace std;
#include<climits>
int main(){
     int n;
     cout<<"Enter no of rows/columns : ";
     cin>>n;
     int arr[n][n];
     cout<<"Enter matrix- "<<endl;
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     cout<<endl;
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++) {
               if(i==n/2 || j==n/2) cout<<arr[i][j]<<" ";
               else cout<<"  ";
          }
          cout<<endl;
     }
}