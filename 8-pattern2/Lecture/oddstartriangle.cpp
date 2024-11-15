#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     //int n1 = 1;
     for(int i=1; i<=n; i++){
          for(int j=1; j<=2*i-1; j++) cout<<"* ";
          //n1+=2;
          cout<<endl;
     }
}