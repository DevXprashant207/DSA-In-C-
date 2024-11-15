#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
     string str;
     cout<<"Enter string : \n";
     getline(cin,str);
     stringstream ss(str);
     string temp;
     vector<string> v;
     while(ss>>temp){
          v.push_back(temp);
     }
     sort(v.begin(),v.end());
     int maxcount = 1;
     int count = 1;
     for(int i=1; i<v.size(); i++){
          if(v[i]==v[i-1]) count++;
          else count = 1;
          maxcount = max(maxcount,count);
     }
     count = 1;
     for(int i=1; i<v.size(); i++){
          if(v[i]==v[i-1]) count++;
          else count = 1;
          if(maxcount==count){
               cout<<v[i]<<" = "<<maxcount<<endl;
          }
     }
}     
