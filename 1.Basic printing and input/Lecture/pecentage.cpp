#include<iostream>
using namespace std;
int main(){
     float x1;
     cout<<"Enter the number in Physics : ";
     cin>>x1;
     float x2;
     cout<<"Enter the number in Chemistry : ";
     cin>>x2;
     float x3;
     cout<<"Enter the number in maths : ";
     cin>>x3;
     float x4;
     cout<<"Enter the number in Hindi : ";
     cin>>x4;
     float x5;
     cout<<"Enter the number in English : ";
     cin>>x5;
     float percentage = (x1 + x2 + x3 + x4 + x5)/5;
     cout<<"The overall percentage is : "<<percentage;
}