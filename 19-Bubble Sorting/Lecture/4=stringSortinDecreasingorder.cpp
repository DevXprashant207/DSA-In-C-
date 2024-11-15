#include<iostream>
#include<string>
using namespace std;
int main(){
     string s;
     getline(cin,s);
     string str;
     for(int i=0; i<s.length(); i++){
          if(s[i]>='X'){
               str.push_back(s[i]);
          }
     }
     // sorting string
     for(int j=0; j<str.size()-1; j++){
          bool flag = true;
          for(int i=0; i<str.size()-1-j; i++){
               int x = (int)(s[i]);
               int y = (int)(s[i+1]);
               if(x>y){
               //swap
               char temp = str[i];
               str[i] = str[i+1];
               str[i+1] = temp;
               flag = false;
               }
          }
          if(flag == true){
               break;
          }
     }
     cout<<str;
}