#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     vector<int>v;
      v.push_back(56);
     v.push_back(67);
     v.push_back(57);
     v.push_back(78);
     v.push_back(89);
     for(int i=0; i<v.size(); i++){
          cout<<v.at(i)<<" ";
     }
     cout<<endl;
     v.at(2) = 12;
     cout<<v.at(2)<<endl;
     for(int i=0; i<v.size(); i++){
          cout<<v.at(i)<<" ";
     }
     cout<<endl;
     // sort : arrange in increasing order
     sort(v.begin(),v.end());
     for(int i=0; i<v.size(); i++){
          cout<<v.at(i)<<" ";
     }
     
}