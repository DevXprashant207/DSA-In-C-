#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permutation(string original,string ans,vector<string>& v){
     if(original==""){
         v.push_back(ans);
          return;
     }
     for(int i=0; i<original.length();i++){
          char ch = original[i];
          string left = original.substr(0,i);
          string right = original.substr(i+1);
          permutation(left+right,ans+ch,v);
     }
}
int main(){
     string str;
     cout<<"Enter string : ";
     getline(cin,str);
     vector<string> v;
     permutation(str,"",v);
     for(string p : v){
       cout<<p<<endl;
     }
}