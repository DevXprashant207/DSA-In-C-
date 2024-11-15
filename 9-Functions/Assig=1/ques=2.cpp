#include<iostream>
using namespace std;
float area(int x){
     return 3.1415326*x*x;
}
int main(){
     float r;
     cout<<"Enter radius of circle : ";
     cin>>r;
     cout<<"Area of circle is : "<<area(r);
}