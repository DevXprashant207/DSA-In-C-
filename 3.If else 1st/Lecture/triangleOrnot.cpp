#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     cout<<"Enter the first side of triangle : ";
     cin>>a;
     cout<<"Enter the second side of triangle : ";
     cin>>b;
     cout<<"Enter the third side of triangle : ";
     cin>>c;
     if(a+b>c && b+c>a && c+a>b){
          cout<<"Triagle is formed by these sides ";
     }
     else{
          cout<<"Triagle is not formed by these sides ";
     }
}