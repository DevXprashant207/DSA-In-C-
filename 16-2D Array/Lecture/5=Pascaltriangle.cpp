#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > Pasacal(int numsRow){
     int m = numsRow;
     vector< vector<int> > v;
     // generate m 1d vector in v;
     for(int i=0; i<m; i++){
          vector<int> a(i+1);
          v.push_back(a);
          for(int j=0; j<=i; j++){
               if(j==0 || i==j) v[i][j] = 1;
               else v[i][j] = v[i-1][j] + v[i-1][j-1]; 
          }
     }
     // pascal triangle form
     // for(int i=0; i<m; i++){
     //      for(int j=0; j<=i; j++){
     //           if(j==0 || i==j) v[i][j] = 1;
     //           else v[i][j] = v[i-1][j] + v[i-1][j-1]; 
     //      }
     // }
     return v;
}
int main(){
     int n;
     cout<<"Enter no of rows : ";
     cin>>n;
     vector< vector<int> > v = Pasacal(n);
     int m = v.size();
     // printing
     for(int i=0; i<m; i++){
          for(int k=m-i; k>0; k--) cout<<" ";
          for(int j=0; j<=i; j++){
               cout<<v[i][j]<<" ";
          }
          cout<<endl;
     }
     // int m;
     // cout<<"Enter no of rows in pascal triangle : ";
     // cin>>m;
     // vector< vector<int> > v;
     // // generate m 1d vector in v;
     // for(int i=1; i<=m; i++){
     //      vector<int> a(i);
     //      v.push_back(a);
     // }
     // // pascal triangle form
     // for(int i=0; i<m; i++){
     //      for(int j=0; j<=i; j++){
     //           if(j==0 || i==j) v[i][j] = 1;
     //           else v[i][j] = v[i-1][j] + v[i-1][j-1]; 
     //      }
     // }

}