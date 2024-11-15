#include<iostream>
using namespace std;
void fun1(int x=6, int y=4){
     cout<<x<<" "<<y<<endl;
}
void fun2(int x=6, int y=4){
     cout<<x<<" "<<y<<endl;
}
void fun3(int x=6, int y=4){
     cout<<x<<" "<<y<<endl;
}
void fun4(int x=6, float y=4.67){
     cout<<x<<" "<<y<<endl;
}
int main(){
     fun1();
     fun2(5,8);
     fun3(4);
     fun4(4, 5.89);
}