#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
     unordered_set<int>  s;
     s.insert(1);
     s.insert(2);
     s.insert(3);
     s.insert(4);
     s.insert(0);
     s.insert(5);
     s.insert(7);
     s.insert(6);
     cout<<s.size()<<endl;
     int target = 10;
     if(s.find(target)!=s.end()) cout<<"exits";
     else cout<<"does not exist";
     cout<<endl;
     for(int ele : s){
          cout<<ele<<" ";
     }
}