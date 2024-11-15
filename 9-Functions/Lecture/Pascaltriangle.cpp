#include<iostream>
using namespace std;
int fact(int x){
     int f = 1;
     for(int i=1; i<=x; i++){
          f = f * i;
     }
     return f;
}
void combination(int n, int r){
     int ncr = fact(n)/(fact(r)*fact(n-r));
     cout<<ncr<<" ";
}
int main(){
     int n;
     cout<<"Enter no of lines : ";
     cin>>n;
     for(int i=0; i<=n-1; i++){
          for(int k=n-i; k>0; k--) cout<<" ";
          for(int j=0; j<=i; j++){
               combination(i, j);// iCj
          }
          cout<<endl;
     }
}