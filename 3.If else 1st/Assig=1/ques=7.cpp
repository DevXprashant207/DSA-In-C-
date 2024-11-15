#include<iostream>
using namespace std;
int main(){
     int x,y;
     cout<<"Enter x co-ordinate of Point = ";
     cin>>x;
     cout<<"Enter y co-ordinate of Point = ";
     cin>>y;
     if(y==0){
          cout<<"The point lies on x-axis.\n";
     }
     if(x==0){
          cout<<"The point lies on y-axis.\n";
     }
     if(x==0 && y==0){
          cout<<"The point lies on origin.";
     }
     if(x!=0 && y!=0){
          cout<<"The point does not lies on x-axis, y-axis and also not origin";
     }
}