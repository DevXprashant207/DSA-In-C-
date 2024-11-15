#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     // bool flag = true;// true means prime
     int a = 0;
     for(int i=2; i<n-1; i++){
          if(n%i==0){
               a = 1;// false means composite
               break;// use to finish the loop
          }
     }
     if(n==1) cout<<"1 is neither prime nor composite ";
     else if(a==0) cout<<n<<" is Prime Number ";
     else cout<<n<<" is a Composite Number ";// falg = false 
}