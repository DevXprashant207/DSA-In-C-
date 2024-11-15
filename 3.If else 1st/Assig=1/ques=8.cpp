#include<iostream>
using namespace std;
int main(){
     int x1,y1;
     cout<<"Enter x co-ordinate of 1st Point = ";
     cin>>x1;
     cout<<"Enter y co-ordinate of 1st Point = ";
     cin>>y1;
     int x2,y2;
     cout<<"Enter x co-ordinate of 2nd Point = ";
     cin>>x2;
     cout<<"Enter y co-ordinate of 2nd Point = ";
     cin>>y2;
     int x3,y3;
     cout<<"Enter x co-ordinate of 3rd Point = ";
     cin>>x3;
     cout<<"Enter y co-ordinate of 3rd Point = ";
     cin>>y3;
     int m1 = (y2 - y1)/(x2 - x1);
     int m2 = (y3 - y2)/(x3 - x2);
     if(m1==m2){
          cout<<"The points are lies on a straight line.";
     }
     else{
          cout<<"The points are not lies on a straight line.";
     }
     
}