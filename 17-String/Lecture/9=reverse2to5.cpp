#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s;
     cout<<"Enter string of lenghth greater than 5 \n";
     getline(cin,s);
     int n = s.size();
     reverse(s.begin()+1,s.begin()+5);
     cout<<s;
}