#include<iostream>
using namespace std;
void sum(int n,int x){
     if(n==0) {
          cout<<x<<endl;
          return ;
     }
     sum(n-1,x+n);
}
int main(){
     int n;
     cout<<"Enter number : ";
     cin>>n;
     sum(n,0);
} 