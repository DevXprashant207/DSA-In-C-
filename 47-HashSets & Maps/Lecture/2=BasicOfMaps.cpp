#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
     // pair<string,int> p;
     // p.first = "Prashant Thakur";
     // p.second = 264;
     // cout<<p.first<<" "<<p.second;
     unordered_map<string, int> mp;
     pair<string,int> p1;
     p1.first = "Prashant Thakur";
     p1.second = 264;
     pair<string,int> p2;
     p2.first = "Prabhat Thakur";
     p2.second = 26;
     pair<string,int> p3;
     p3.first = "Pranjal Singh";
     p3.second = 2;
     pair<string,int> p4;
     p4.first = "Prajjwal Singh";
     p4.second = 6;
     mp.insert(p1);
     mp.insert(p2);
     mp.insert(p3);
     mp.insert(p4);
     mp["Ekta"] = 56;
     cout<<mp.size()<<endl;
     mp.erase("Prabhar Thakur");
     cout<<mp.size()<<endl;
     for(auto p : mp){
          cout<<p.first<<" "<<p.second<<endl;
     }
     
}