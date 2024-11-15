#include<iostream>
using namespace std;
int main(){
     char ch1, ch2;
     cout<<"Enter the first character : ";
     cin>>ch1;
     cout<<"Enter the second character : ";
     cin>>ch2;
     int x = (int)ch1;
     int y = (int)ch2;
     int z = x - y; 
     cout<<"The diffrence between ASCII values of first character and second character is : "<<z;
}
