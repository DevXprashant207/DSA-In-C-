#include<iostream>
using namespace std;
int main(){
     int x = 5;
     int *p = &x;
     cout<<p<<endl;
     p = p + 1;
     cout<<p<<endl;
     int y = 5;
     int *p1 = &y;
     cout<<*p1<<endl;
     *p1 = *p1 + 1;
     cout<<*p1<<endl;
     int z = 5;
     int* p2 = &z;
     cout<<*p2<<endl;
     p2 = p2 + 1;
     cout<<*p2<<endl;
}