#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v(6,8);// initilization with 6, and every element is 8
     cout<<v.size()<<" "<<v.capacity()<<endl;
     for(int i=0; i<v.size(); i++){
          cout<<v[i]<<" ";
     } 
     
}