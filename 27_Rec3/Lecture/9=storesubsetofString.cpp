#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storesubset(string original,string ans, int idx ,vector<string>& v){
     if(idx==original.size()){
          v.push_back(ans);
          return;
     }
     char ch = original[idx];
     storesubset(original,ans,idx+1,v);
     storesubset(original,ans+ch,idx+1,v);
}
int main(){
     string str;
     cout<<"Enter string : ";
     getline(cin,str);
     vector<string> v;
     storesubset(str,"",0,v);
     for(string p : v){
       cout<<p<<endl;
     }
}