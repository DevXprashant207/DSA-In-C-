#include<iostream>
using namespace std;
void digitscount(int x){
     int n1 = x;
     int count = 0;
     while(x>0){
          x/=10;
          count++;
     }
     cout<<"No of digits in "<<n1<<" is : "<<count<<endl;
     cout<<"Square of "<<n1<<" is : "<<n1*n1;
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     digitscount(n);
}