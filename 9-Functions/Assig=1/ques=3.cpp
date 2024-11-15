#include<iostream>
using namespace std;
void numbers(int x, int y){
     if(x>y) numbers(y,x);
     cout<<"All odd numbers between "<<x<<" and "<<y<<endl;
     for(int i=x; i<=y; i++){
          if(i%2!=0){
               cout<<i<<" ";
          }
     }
}
int main(){
     int a, b;
     cout<<"Enter First number : ";
     cin>>a;
     cout<<"Enter Second number : ";
     cin>>b;
     numbers(a,b);
     
}