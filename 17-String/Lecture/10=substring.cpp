#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s = "abcdefgh";
     int n = 673728;
     // s.subtring(index, length)
     cout<<s.size()<<endl;
     cout<<s.substr(2,3)<<endl;
     cout<<s.substr(2)<<endl;
     string p = to_string(n);
     cout<<p.size()<<endl;
}