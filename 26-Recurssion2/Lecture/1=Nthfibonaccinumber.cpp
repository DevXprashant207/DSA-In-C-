#include<iostream>
using namespace std;
int fibo(int n){
   // ternary operator
   //(n==1 || n==2) ? (return 1) : (return fibo(n-1) + fibo(n-2));
     if(n==1 || n==2 || n==0) return 1;
     // int leftAns = fibo(n-1);
     // int rightAns = fibo(n-2);
     // return leftAns + rightAns;
     return fibo(n-1) + fibo(n-2);
}
int main(){
   int n;
   cout<<"Enter nth no of term : ";
   cin>>n;
   int p = fibo(n);
   cout<<n<<"th term of fibonaccci series is : "<<p;
}