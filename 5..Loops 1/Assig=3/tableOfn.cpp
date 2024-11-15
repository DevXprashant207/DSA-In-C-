#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter table Number : ";
     cin>>n;
     int j = 1;
     for(int i=n; i<=n*10; i+=n){
          cout<<n<<" X "<<j<<" = "<<i<<endl;
          j++;
     }
}