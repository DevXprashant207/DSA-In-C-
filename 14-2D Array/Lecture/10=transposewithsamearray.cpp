#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of square matrix : ";
     cin>>n;
     int arr[n][n];
     // input
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     // transpose the same array
     for(int i=0; i<n; i++){
          for(int j=i+1; j<n; j++){
                    int temp = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
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