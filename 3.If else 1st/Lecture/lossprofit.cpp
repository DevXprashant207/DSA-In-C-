#include<iostream>
using namespace std;
int main(){
     int sp,cp;
     cout<<"Enter Cost price : ";
     cin>>cp;
     cout<<"Enter selling Price : ";
     cin>>sp;
     if(sp>cp){
          cout<<"Seller is in profit of "<<sp-cp<< " Rs.";
     }
     if(cp>sp){
          cout<<"Seller is in loss of "<<cp-sp<<" Rs.";
     }
     if(sp==cp){
          cout<<"Seller is no loss and no profit.";
     }
}