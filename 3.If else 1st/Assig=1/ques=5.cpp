#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     cout<<"Enter the 1st side of triangle : ";
     cin>>a;
     cout<<"Enter the 2nd side of triangle : ";
     cin>>b;
     cout<<"Enter the 3rd side of triangle : ";
     cin>>c;
    if(a+b>c && b+c>a && a+c>b){
      if(a==b && b==c){
          cout<<"The triangle is equilateral\n and also ";
     }
     if(a==b || b==c || c==a){
          cout<<"The triangle is isoscelene";
     }
     if(a!=b && b!=c && c!=a){
          cout<<"The triagle is scelene ";
     }
    }
    else{
     cout<<"triangle is not possible ";
    }

}