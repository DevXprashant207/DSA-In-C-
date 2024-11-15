#include<iostream>
using namespace std;
void fun(int x,int y){
     cout<<"Address of fun wala x : "<<&x<<endl;
     cout<<"Address of fun wala x : "<<&x<<endl;
}
int main(){
     int x = 3;
     int y = 4;
     cout<<"Address of main wala x : "<<&x<<endl;
     cout<<"Address of main wala y : "<<&y<<endl;
     fun(x,y);

}