#include<iostream>
using namespace std;
int maxthree(int a, int b, int c){
     if(a>b && a>c){
          return a;
     }
     else if(b>c && b>a){
          return b;
     }
     else return c;
}
int main(){
     int a, b, c;
     cout<<"Enter a : ";
     cin>>a;
     cout<<"Enter b : ";
     cin>>b;
     cout<<"Enter c : ";
     cin>>c;
     cout<<"Max in a, b and c is : "<<maxthree(a, b, c);
}