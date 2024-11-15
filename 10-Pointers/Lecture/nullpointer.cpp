#include<iostream>
using namespace std;
int main(){
     int* ptr =  NULL; // reserved addresse in pointer
     cout<<ptr<<endl;  // 0x0
     int *ptr2 = 0;
     cout<<ptr2<<endl;
     int *ptr3 = '\0';
     cout<<ptr3<<endl;
     //cout<<&ptr<<endl; // pointer ke ander ka addreess
     //<<*ptr<<endl; // pointer ke address per store value

}