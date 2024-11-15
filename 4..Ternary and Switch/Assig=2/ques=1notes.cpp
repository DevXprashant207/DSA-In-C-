#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter amount : ";
     cin>>n;
     int n1 = n / 2000;// 2000 motes
     n = n -(n1 * 2000);
     int n2 = n / 500;
     n = n - ( n2 * 500);
     int n3 = n / 200;
     n = n - ( n3 * 200);
     int n4 = n / 100;
     n = n - ( n4 * 100);
     int n5 = n / 50;
     n = n - ( n5 * 50);
     int n6 = n / 20;
     n = n - (n6 * 20);
     int n7 = n / 10;
     cout<<"Notes of 2000 = "<<n1<<endl;
     cout<<"Notes of 500 = "<<n2<<endl;
     cout<<"Notes of 200 = "<<n3<<endl;
     cout<<"Notes of 100 = "<<n4<<endl;
     cout<<"Notes of 50 = "<<n5<<endl;
     cout<<"Notes of 20 = "<<n6<<endl;
     cout<<"Notes of 10 = "<<n7<<endl;
}