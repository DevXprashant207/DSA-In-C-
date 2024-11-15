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
     int count = 0;
     while(ss>>temp){// temp take one word from ss and print and after that is take next word
          cout<<temp<<endl;
          count++;
     }
     cout<<"No of words is : "<<count;
}
