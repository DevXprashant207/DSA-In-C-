#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s;
     cout<<"Enter string : ";
     getline(cin,s);
     sort(s.begin(),s.end());
     cout<<s;

}
