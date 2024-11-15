#include<iostream>
using namespace std;
int main(){
     int x = 4;
     int* p = &x;// int* p is same as int *p
     cout<<&x<<endl;
     cout<<p<<endl;
     cout<<&p<<endl;
     float y = 4.45463;
     float* q = &y;// int* p is same as int *p
     cout<<&y<<endl;
     cout<<q<<endl;
     cout<<&q<<endl;
     //value pass by refrence
     cout<<*p<<endl;
     cout<<*q<<endl;
     *p = 6;
     *q = 5.6;
     cout<<*p<<endl;
     cout<<*q<<endl;
}