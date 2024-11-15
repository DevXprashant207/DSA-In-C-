#include<iostream>
#include<vector>
using namespace std;
int HCF(int a, int b){// T.C = O(min(a,b))
     for(int i = min(a,b); i>=2; i--){
          if(a%i==0 && b%i==0) return i;
     }
     return 1;
}
int gcdrec(int a, int b){
     if(a==0) return b;
     else return gcdrec(b%a,a);
}
int main(){
     int a,b;
     cout<<"Enter a : ";
     cin>>a;
     cout<<"Enter b : ";
     cin>>b;
     //int x = min(a,b),y = max(a,b);
     int n = gcdrec(a,b);
     cout<<"HCF of a and b is : "<<n;
}