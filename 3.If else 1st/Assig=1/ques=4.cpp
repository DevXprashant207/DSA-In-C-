#include<iostream>
using namespace std;
int main(){
     float a,b;
     cout<<"Enter length of reactangle : ";
     cin>>a;
     cout<<"Enter breath of reactangle : ";
     cin>>b;
     float A = a * b;
     float P = 2 * (a + b);
     if(A>P){
          cout<<"Area of the reactangle is greater than perimeter ";
     }
     else{
          cout<<"Area of the reactangle is not greater than perimeter ";
     }

}