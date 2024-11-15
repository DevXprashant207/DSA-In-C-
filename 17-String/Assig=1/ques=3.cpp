#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s;
     cout<<"Enter string : ";
     getline(cin,s);
     reverse(s.begin(),s.end());
     string p = s.substr(0);
     reverse(s.begin(),s.end());
     if(p==s.substr(0)){
          cout<<"Yes, this is a Palindrome";
     }
     else{
          cout<<"No, this is not a Palindrome";
     }
     
}