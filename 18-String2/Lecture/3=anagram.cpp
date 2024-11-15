#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s = "physicswallah";
     string t = "physicwallahs";
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     cout<<s<<endl;
     cout<<t<<endl;
     if(s==t) cout<<"true, they are anagram of each other ";
     else cout<<"No, they are not a anagran of each other ";
}
