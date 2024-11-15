#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s;
     cout<<"Enter even no of elements in string : \n";
     getline(cin,s);
     int n = s.size();
     cout<<s.substr(n/2);
}