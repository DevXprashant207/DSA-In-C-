#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
int main(){
     vector<int>a;
     a.push_back(3);
     a.push_back(5);
     a.push_back(7);
     a.push_back(9);
     display(a);
}   
