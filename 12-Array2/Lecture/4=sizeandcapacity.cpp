#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
     // for inserting and inpit do not use [] these beckets
     cout<<"S"<<" C\n";
     v.push_back(5);
     cout<<v.size()<<" ";
     cout<<v.capacity()<<endl;
     // v[1] = 7, do not use
     v.push_back(7);
     cout<<v.size()<<" ";
     cout<<v.capacity()<<endl;
     v.push_back(89);
     cout<<v.size()<<" ";
     cout<<v.capacity()<<endl;
     v.push_back(19);
     cout<<v.size()<<" ";
     cout<<v.capacity()<<endl;
     v.push_back(67);
     cout<<v.size()<<" ";
     cout<<v.capacity()<<endl;
     // for updating or acces use []
     v[3] = 876;
     cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4];
}