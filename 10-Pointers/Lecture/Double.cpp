#include<iostream>
using namespace std;
int main(){
     int x = 5;
     int* ptr = &x;
     int** ptr1 = &ptr;
     int*** p = &ptr1;
     cout<<x<<endl;
     cout<<&x<<endl;
     cout<<ptr<<endl;
     cout<<*ptr<<endl;
     cout<<**ptr1<<endl;
     cout<<***p<<endl;
     cout<<*p<<endl;  

}