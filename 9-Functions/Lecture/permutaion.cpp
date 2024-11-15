#include<iostream>
using namespace std;
int fact(int x){
     int f = 1;
     for(int i=1; i<=x; i++){
          f = f * i;
     }
     return f;
}
void Permutation(int n, int r){
     int npr = fact(n)/fact(n-r);
     cout<<"Permutation is : "<<npr;
}
int main(){
     int n,r;
     cout<<"Enter n : ";
     cin>>n;
     cout<<"Enter r : ";
     cin>>r;
     Permutation(n, r);
}