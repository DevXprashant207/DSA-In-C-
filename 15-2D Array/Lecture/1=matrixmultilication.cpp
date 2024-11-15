#include<iostream>
using namespace std;
int main(){
     int m;
     cout<<"Enter no of rows of 1st matrix : ";
     cin>>m;
     int n;
     cout<<"Enter no of columns of 1st matrix : ";
     cin>>n;
     int p;
     cout<<"Enter no of rows of 2nd matrix : ";
     cin>>p;
     int q;
     cout<<"Enter no of columns of 2nd marix : ";
     cin>>q;
     if(n==p){
          cout<<"Enter first matix : "<<endl;
          int a[m][n];
          for(int i=0; i<m; i++){
               for(int j=0; j<n; j++){
                    cin>>a[i][j];
               }
          }
          cout<<"Enter second matrix : "<<endl;
          int b[p][q];
          for(int i=0; i<p; i++){
               for(int j=0; j<q; j++){
                    cin>>b[i][j];
               }
          }
          // resultant matrix
          int r[m][q];
          for(int i=0; i<m; i++){
               for(int j=0; j<q; j++){
                    r[i][j] = 0;
                    // multiplies 
                    // r[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j].....so on
                    for(int k=0; k<p; k++){
                         r[i][j] += a[i][k] * b[k][j];
                    }
               }
          }
          cout<<"Resultant matrix is :"<<endl;
          for(int i=0; i<m; i++){
               for(int j=0; j<q; j++){
                   cout<<r[i][j]<<" ";
               }
               cout<<endl;
          }
     }
     else {// n!=p
          cout<<"Matrix Multiplication is not possible";
     }
}