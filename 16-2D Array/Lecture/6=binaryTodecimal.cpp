#include<iostream>
#include<vector>
using namespace std;
int main(){
     int d;
     cout<<"Enter digit of Number : ";
     cin>>d;
     vector<int> binary;
     cout<<" Enter binary number with spaces : ";
     for(int i=0; i<d; i++){
          int x;
          cin>>x;
          binary.push_back(x);
     }
     int sum = 0;
     int x = 1;
     for(int i=d-1; i>=0; i--){
          sum += binary[i]*x;
          x *= 2;
     }
     cout<<"Decimal conversion is : "<<sum;

}