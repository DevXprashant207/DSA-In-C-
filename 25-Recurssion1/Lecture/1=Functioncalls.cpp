#include<iostream>
using namespace std;
int product(int x , int y){
     return x * y;
}
void greet(int x){
     if(x==0) return;
     cout<<"Good morning "<<endl;
     cout<<"How are you"<<endl;
     greet(x-1);
}
int main(){
     int a, b;
     cout<<"Enter a : ";
     cin>>a;
     cout<<"Enter b : ";
     cin>>b;
     cout<<"Product is : "<<product(a, b);
     cout<<endl;
     greet(4);
     
}