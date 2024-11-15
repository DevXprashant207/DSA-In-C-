#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s;
     cout<<"Enter string : ";
     getline(cin,s);
     // special array method
     vector<int> arr(26,0);
     for(int i=0; i<s.size(); i++ ){
          char ch = s[i];
          int ascii = (int)ch;
          arr[ascii-97]++;
     }
     int max = 0;
     for(int i=0; i<26; i++){
          if(arr[i]>max) max = arr[i];
     }
     for(int i=0; i<26; i++){
          if(arr[i]==max){
               int ascii = i+ 97;
               char ch = (char)ascii;
               cout<<ch<<" = "<<max;
          }
     }
     // int max = 0;
     // for(int i=0; i<s.size(); i++){
     //      char ch = s[i];
     //      int count = 1;
     //      for(int j=i+1; j<s.size(); j++){
     //           if(s[j]==s[i]) count++;
     //      }
     //      if(max<count) max = count;
     // }
     // for(int i=0; i<s.size(); i++){
     //      char ch = s[i];
     //      int count = 1;
     //      for(int j=i+1; j<s.size(); j++){
     //           if(s[j]==s[i]) count++;
     //      }
     //      if(count==max) {
     //           cout<<ch<<" = "<<max<<endl;
     //      } 
     // }
}
