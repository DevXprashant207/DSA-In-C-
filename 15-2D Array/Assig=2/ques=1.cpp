#include<iostream>
using namespace std;
#include<climits>
int main(){
     int n;
     cout<<"Enter no(odd) of rows/columns : ";
     cin>>n;
     int arr[n][n];
     cout<<"Enter matrix- "<<endl;
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     cout<<endl<<" "<<endl;
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               if(i==j || i+j==(n-1)) cout<<arr[i][j]<<" ";
               else cout<<"  ";
          }
          cout<<endl;
     }
}
// ass=1(3), assi2(4)