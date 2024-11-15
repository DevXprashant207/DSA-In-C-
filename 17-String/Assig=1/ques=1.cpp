#include<iostream>
#include<string>
using namespace std;
int main(){
     string s;
     cout<<"Enter string : ";
     getline(cin,s);
     int n = s.size();
     for(int i=0; i<n; i++){
          if(i%2!=0){
               s[i] = '#';
          }
     }
     cout<<s;
}