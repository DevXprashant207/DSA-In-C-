#include<iostream>
using namespace std;
void swap(int n, int m){
     // int temp = n;
     // n = m;
     // m = temp;
     n = n + m;
     m = n - m;
     n = n - m;
     cout<<n<<" "<<m;
}
int main(){
     int x,y;
     cout<<"Enter 1st Number : ";
     cin>>x;
     cout<<"Enter 2nd Number : ";
     cin>>y;
     swap(x, y);
}