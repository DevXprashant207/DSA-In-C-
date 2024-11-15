#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     cout<<"Enter a : ";
     cin>>a;
     cout<<"Enter b : ";
     cin>>b;
     cout<<"Enter c : ";
     cin>>c;
     // if(a>b && a>c){
     //      cout<<"a is gretest in all of them ";
     // }
     // if(b>c && b>a ){
     //      cout<<"b is gretest in all of them ";
     // }
     // if(c>a && c>b){
     //      cout<<"c is gretest in all of them ";
     // }
     if(a>b){
          if(a>c){
               cout<<" a is greatest in all three.";
          }
          else{//a<c = c>a>b
               cout<<" c is greatest in all three.";
          }
     }
     else{//b>a
          if(b>c){
               cout<<" b is gretest in all three.";
          }
          else{// c>b = c>b>a
               cout<<" c is gretest in all three.";
          }
     }

}