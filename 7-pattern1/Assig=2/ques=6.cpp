#include<iostream>
using namespace std;
int main(){
     int m;
     cout<<"Enter no of rows : ";
     cin>>m;
     int n;
     cout<<"Enter no of columns : ";
     cin>>n;
     for(int i=1; i<=m; i++){
          for(int j=1; j<=n; j++){
               if(j==1 || i==1 || j==n || i==m) cout<<"* ";
               else cout<<"  ";
          }
          cout<<endl;
     }
}