#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int n1 = n;
     for(int i=1; i<=2*n-1; i++){
          if(i<=n) for(int j=1; j<=i; j++) cout<<"* ";
          else {for(int k=1; k<=n1-1; k++) cout<<"* ";
               n1--;
          }
          cout<<endl;
          
     }
}