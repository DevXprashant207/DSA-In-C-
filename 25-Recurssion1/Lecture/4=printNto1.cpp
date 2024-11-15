#include<iostream>
using namespace std;
void num(int n){
     if(n==0) return; // base case;
     cout<<n<<" "<<endl;// kaam......
     num(n-1);// recursive call
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     num(n);
}