#include<iostream>
#include<string>
using namespace std;
void binary(string s, int n){
     if(s.length()==n){
          cout<<s<<endl;
          return;
     }
     binary(s+'0',n);
     //binary(s+'1',n);
     if(s=="" || s[s.size()-1]=='0') binary(s+'1',n);
}
int main(){
     int n;
     cout<<"Enter length : ";
     cin>>n;
     binary("",n);
}