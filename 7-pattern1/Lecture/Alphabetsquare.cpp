#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<" Enter Number of lines : ";
     cin>>n;
     for(int i=1; i<=n; i++){
          // int d = 65;
          for(int j=1; j<=n; j++){
               cout<<(char)(j+64)<<" ";
               // char x = (char)d;
               // cout<<x<<" ";
               // d++;
          }
          cout<<endl;
     }
}