#include<iostream>
using namespace std;
void num(int n){
     if(n==0) return; // base case;
     num(n-1);// recursive call
     cout<<n<<" ";// kaam....
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     num(n);
}