#include<iostream>
using namespace std;
int main(){
     float r;
     cout<<"Enter the radius of the circle : ";
     cin>>r;
     float A = 3.14 * r * r;
     float P = 2 * 3.14 * r;
     if(A>P){
          cout<<"Area of the circle is greater than its circumfrence ";
     }
     else{
           cout<<"Area of the circle is not greater than its circumfrence ";
     }
}