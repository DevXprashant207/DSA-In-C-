#include<iostream>
using namespace std;
void fact(int n){
     int f = 1;
     for(int i=1; i<=n; i++){
          f *= i;
          cout<<"\nFactorial of "<<i<<" is "<<f;
     }
}
int main(){
     int x;
     cout<<"Enter Number : ";
     cin>>x;
     fact(x);
}