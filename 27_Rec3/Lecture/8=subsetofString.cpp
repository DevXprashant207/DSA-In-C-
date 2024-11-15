#include<iostream>
#include<string>
using namespace std;
void subset(string original,string ans, int idx){
     if(idx==original.size()){
          cout<<ans<<endl;
          return;
     }
        char ch = original[idx];
        subset(original,ans,idx+1);
        subset(original,ans+ch,idx+1);
}
int main(){
     string str;
     cout<<"Enter string : ";
     getline(cin,str);
     subset(str,"",0);
}