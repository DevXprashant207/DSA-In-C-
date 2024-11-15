#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string s;
     cout<<"Enter even no of elements in string : \n";
     getline(cin,s);
     int n = s.size();
     reverse(s.begin(),s.begin()+n/2);
     // int i = 0;
     // int j = n/2;
     // while(i>=j){
     //      int temp = s[i];
     //      s[i] = s[j];
     //      s[j] = temp;
     //      i++;
     //      j--;
     // }
     cout<<s;

}