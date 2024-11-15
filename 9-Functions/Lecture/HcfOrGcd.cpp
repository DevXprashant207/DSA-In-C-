#include<iostream>
using namespace std;
int gcd(int x, int y){
     int hcf = 1;
     for(int i=min(x,y); i>=1; i--){
          if(x%i==0 && y%i==0){
                    hcf = i;
                    break;
          }
     }
     return hcf;
}
int main(){
     int a;
     cout<<"Enter 1st number : ";
     cin>>a;
     int b;
     cout<<"Enter 2nd number : ";
     cin>>b;
     cout<<"HCF of a and b is : "<<gcd(a,b);
}