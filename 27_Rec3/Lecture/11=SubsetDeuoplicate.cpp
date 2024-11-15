#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storesubset(string original,string ans, int idx ,vector<string>& v,bool flag){
     if(idx==original.size()){
          v.push_back(ans);
          return;
     }
     char ch = original[idx];
     char dh = original[idx+1];
     if(original.size()==1){
          if(flag==true) storesubset(original,ans+ch,idx+1,v,true);
          storesubset(original,ans,idx+1,v,true);
          return;// taki neeche ki do condition na chhale
     }
     if(ch==dh){// jab duplicate elements ho
          if(flag==true) storesubset(original,ans+ch,idx+1,v,true);
          storesubset(original,ans,idx+1,v,false);
     }
     else{// no duplicate
          if(flag==true) storesubset(original,ans+ch,idx+1,v,true);
          storesubset(original,ans,idx+1,v,true);
     }
}
int main(){
     string str;
     cout<<"Enter string : ";
     getline(cin,str);
     vector<string> v;
     storesubset(str,"",0,v,true);
     for(string ele : v){
       cout<<ele<<endl;
     }
}  