#include<iostream>
using namespace std;
int main(){
     int a = 15 , b = 20;
     int *ptr = &a;
     int *ptr1 = &b;
     *ptr = *ptr1;
     cout<<a<<" "<<b;
}
