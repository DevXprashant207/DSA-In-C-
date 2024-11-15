#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
     set<int>  s;
     s.insert(1);
     s.insert(3);
     s.insert(2);
     s.insert(4);
     for(int ele : s){
          cout<<ele<<" ";
     }
     cout<<endl;
     map<int,int> m1;
     m1[1] = 2;
     m1[3] = 4;
     m1[2] = 2;
     m1[4] = 3;
     for(auto x : m1){
          cout<<x.second<<" ";
     }
     cout<<endl;
     map<string,int> m2;
     m2["Prashant"] = 264;
     m2["Raghav"]  = 23;
     m2["Manish"] = 7;
     for(auto x : m2){
          cout<<x.second<<" ";
     }
     cout<<endl;
}