#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of square arr : ";
     cin>>n;
     int arr[n][n];
     // input
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     // transpose
     for(int i=0; i<n; i++){
          for(int j=i+1; j<n; j++){
          int temp = arr[i][j];
          arr[i][j] = arr[j][i];
          arr[j][i] = temp;
          }
     } 
     // reverse each colunm
     for(int k=0; k<n; k++){
          int i = 0;
          int j = n-1;
          while(i<=j){
          int temp = arr[i][k];
          arr[i][k] = arr[j][k];
          arr[j][k] = temp;
          i++;
          j--;
          }
     }
     cout<<"Transposed matrix is : "<<endl;
     // print
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
     
}