#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     cout<<"Enter the marks of A : ";
     cin>>a;
     cout<<"Enter the marks of B : ";
     cin>>b;
     cout<<"Enter the marks of C : ";
     cin>>c;
     if(a<b && b<c){
          cout<<"A has least Number ";
     }
      if(b<c && c<a){
          cout<<"B has least Number ";
     }
      if(c<a && a<b){
          cout<<"C has least Number ";
     }
}    