#include<iostream>
using namespace std;
void num(int n){
     if(n==0) {
        
     }; // base case;
     num(n-1);// recursive call
     cout<<n<<" ";
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     num(n);
}