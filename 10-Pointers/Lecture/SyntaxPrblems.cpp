#include<iostream>
using namespace std;
int main(){
     int x = 5, y = 6;
     // int* p1, p2 is treated as int *p1, p2(int)
     int *p1 = &x, *p2 = &y;
     cout<<*p1<<" "<<*p2;
}