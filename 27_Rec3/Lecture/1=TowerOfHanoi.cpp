#include<iostream>
using namespace std;
void hanoi(int n,char s,char h,char d){
     if(n==0) return;
     hanoi(n-1,s,d,h); // h treat as destination , matlab n-1  disk ko h means d per le jana hai
     cout<<s<<" -> "<<d<<endl;
     hanoi(n-1,h,s,d); // here s treat as helper , n-1 move h to d
}
int main(){
     int n;
     cout<<"Enter no of disks : ";
     cin>>n;
     hanoi(n,'A','B','C');
}     