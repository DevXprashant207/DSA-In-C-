#include<iostream>
#include<string>
using namespace std;
// void removechar(char ch, string ans, string original){
//      if(original.length()==0){
//           cout<<ans;
//           return;
//      }
//      char s = original[0];
//      if(s==ch) removechar(ch, ans,original.substr(1));
//      else removechar(ch, ans+s,original.substr(1));
// }
void removechar(char ch, string ans, string original,int idx){
     if(idx==original.length()){
          cout<<ans;
          return;
     }
     char s = original[idx];
     if(s==ch) removechar(ch, ans,original,idx+1);
     else removechar(ch, ans+s,original,idx+1);
}
int main(){
     string str;
     cout<<"Enter string : ";
     getline(cin,str);
     cout<<"Enter charactor to skip : ";
     char ch;
     cin>>ch;
     removechar(ch,"",str,0);
}