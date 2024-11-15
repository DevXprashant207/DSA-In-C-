#include<iostream>
using namespace std;
int maze(int sr, int sc){
     if(sr<1 || sc <1) return 0;
     if(sr==1 && sc==1) return 1;
     int rightways = maze(sr, sc-1);// up
     int downways = maze(sr-1,sc);// left
     return rightways + downways;
}
int main(){
     int a, b;
     cout<<"Enter no of rows : ";
     cin>>a;
     cout<<"Enter no of columns : ";
     cin>>b;
     int nw = maze(a,b);
     cout<<"Total no of ways is : "<<nw;
}