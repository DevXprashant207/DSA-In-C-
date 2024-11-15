#include<iostream>
using namespace std;
void square(int x){
     for(int i=1; i<=x; i++){
          cout<<"Square of "<<i<<" is : "<<i*i<<endl;
     }
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     square(n);
}