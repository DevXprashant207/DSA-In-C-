#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
     v.push_back(56);
     v.push_back(67);
     v.push_back(57);
     v.push_back(78);
     v.push_back(89);
     v.push_back(556);
     v.push_back(545);
     v.push_back(53);
     v.push_back(54);
     v.push_back(5);
     v.push_back(52);
     v.push_back(42);
     v.push_back(58);
     v.push_back(51);
     v.push_back(57);
     v.push_back(569);
     v.push_back(55);
     v.push_back(49);
     v.push_back(23);
     v.push_back(64);
     v.push_back(45);
     cout<<"Size is : "<<v.size()<<endl;
     cout<<"capacity is : "<<v.capacity()<<endl;
     v.pop_back();
     v.pop_back();
     v.pop_back();
     v.pop_back();
     v.pop_back();
     v.pop_back();
     cout<<"Size is : "<<v.size()<<endl;
     cout<<"capacity is : "<<v.capacity()<<endl;
}