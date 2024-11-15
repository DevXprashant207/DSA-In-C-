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
     cout<<"Enter matrix- "<<endl;
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
     }
     int x1,x2,y1,y2;
     cout<<"Enter co-ordinates of points x1, y1 and x2, y2 : ";
     cin>>x1>>y1>>x2>>y2;
     int sum = 0;
     for(int i=x1; i<=y2; i++){
          for(int j=x2; j<=y1; j++){
               sum += arr[i][j];
          }
     }
     cout<<"Sum of reactangle form by x1, y2 and x2, y2 is : "<<sum;
     

}