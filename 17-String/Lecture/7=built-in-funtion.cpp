#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     //string s = "Prashant thakur is now at his growing stage";
     //cout<<s.length()<<endl;// index 0 t0 s.length -1
     //cout<<s.size()<<endl;

     // string s = "Prashant";
     // cout<<s<<endl;
     // s.push_back('a');
     // s.push_back('b');
     // cout<<s<<endl;

     // string s = "Prashant";
     // cout<<s<<endl;
     // s.pop_back();
     // s.pop_back();
     // cout<<s<<endl;

     // string s = "abc";
     // cout<<s<<endl;
     // string t = "lmn";
     // s = "xyz" + t + s + "pqr";
     // cout<<s<<endl;

     string s = "abcdef";
     cout<<s<<endl;
     reverse(s.begin()+1,s.end()-2);
     cout<<s<<endl;
     string p = "abcdef";
     reverse(p.begin()+1,p.begin()+4);
     cout<<p<<endl;
}