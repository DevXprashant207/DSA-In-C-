#include<iostream>
using namespace std;
void greet(int x){
     if(x==0) return;
     cout<<"Good Morning"<<endl;
     greet(x-1);
}
int main(){
     int n;
     cout<<"Enter number how many number =s of times you want to print good morning : ";
     cin>>n;
     greet(n);
}