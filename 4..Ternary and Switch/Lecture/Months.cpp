#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter Month Number : ";
     cin>>n;
     switch(n){
          case 1:
               cout<<"January and 31 days";
               break;
          case 2:     
               cout<<"Febuary and 28 or 29(leap year) days";
               break;
          case 3:     
               cout<<"March and 31 days";
               break;
          case 4:     
               cout<<"April and 30 days";
               break;
          case 5:     
               cout<<"May and 31 days";
               break;
          case 6:     
               cout<<"June and 30 days";
               break;
           case 7:
               cout<<"July and 31 days";
               break;
          case 8:     
               cout<<"August and 31 days";
               break;
          case 9:     
               cout<<"September and 30 days";
               break;
           case 10:
               cout<<"October and 31 days";
               break;
          case 11:     
               cout<<"November and 30 days";
               break;
          case 12:     
               cout<<"Decemeber and 31 days";
               break;
           default:
               cout<<"Invalid Number ";             
          
     }
}