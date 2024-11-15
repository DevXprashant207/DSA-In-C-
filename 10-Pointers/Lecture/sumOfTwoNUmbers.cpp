#include<iostream>
using namespace std;
int main(){
     int x, y;
     int* p1 = &x;
     int* p2 = &y;
     cout<<"Enter First Number : ";
     cin>>*p1;
     cout<<"Enter second Number : ";
     cin>>*p2;
     // we can take input from user by x of pointer both and also print
     cout<<"Sum of these two Number is : "<<x + y;
     cout<<"\nSum of these two Number is : "<<*p1 + *p2;
}