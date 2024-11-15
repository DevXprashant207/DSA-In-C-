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
     for(int i=0; i<v.size(); i++){
          cout<<v[i]<<" ";
     }
     cout<<endl;
     v.pop_back();// when use pobback size is change but capacity is not change
     v.pop_back();
     for(int i=0; i<v.size(); i++){
          cout<<v[i]<<" ";
     }  
}