#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string duplicate(string s){
     stack<char> st;
     st.push(s[0]);
     for(int i=1; i<s.length(); i++){
          if(s[i]!=st.top()) st.push(s[i]); 
     }
     s = ""; // for empting the string 
     while(st.size()!=0){
          s += st.top();
          st.pop();
     }
     reverse(s.begin(), s.end());
     return s;
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    s = duplicate(s);
     cout<<s<<endl;
}