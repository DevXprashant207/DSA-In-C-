#include<iostream>
using namespace std;
void swap(int*a, int *b){// pas by refrence
     int temp = *a;
     *a = *b;
     *b = temp;
     return;
}
int main(){
     int x, y;
     cout<<"Enter First Number : ";
     cin>>x;
     cout<<"Enter Second Number : ";
     cin>>y;
     swap(&x,&y);
     cout<<x<<" "<<y;
}