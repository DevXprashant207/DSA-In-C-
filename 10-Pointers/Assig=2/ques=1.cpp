#include<iostream>
using namespace std;
int product(int* x , int* y){
          int p = (*x) * (*y);
          return p;
}
int main(){
     int a, b;
     cout<<"Enter Fisrt Number : ";
     cin>>a;
     cout<<"Enter Second Number : ";
     cin>>b;
     int *p1 = &a;
     int *p2 = &b;
     cout<<"Product is : "<<product(p1,p2); 
}