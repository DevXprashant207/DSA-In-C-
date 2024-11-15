#include<iostream>
using namespace std;
int main(){
     float r,h;
     cout<<"Enter the radius of the cylinder : ";
     cin>>r;
     cout<<"Enter the height of the cylinder : ";
     cin>>h;
     float v = 3.1415 * r * r * h;
     cout<<"The volume of the cylinder is : "<<v;
}