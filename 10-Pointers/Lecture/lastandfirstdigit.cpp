#include<iostream>
using namespace std;
// void ldfd(int n){
//      int ld = n%10;
//      int fd = 0;
//      while(n>9){
//           n/=10;
//          fd = n;
//      }
//      cout<<"First digit is : "<<fd;
//      cout<<"\nSecond digit is : "<<ld;
// }
void ldfd(int x, int *p3, int *p4){
     *p3 = x%10;
     while(x>9){
          x/=10;
     }
     *p4 = x;
     return;
}
int main(){
     int n;
     cout<<"Enter Number : ";
     cin>>n;
     int fd, ld;
     int *p1 = &ld, *p2 = &fd;
     ldfd(n, p1, p2);
     cout<<"First digit is : "<<fd;
     cout<<"\nLastdigit is : "<<ld;
}