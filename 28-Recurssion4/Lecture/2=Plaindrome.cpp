#include<iostream>
#include<vector>
#include<string>
using namespace std;
void palindrome(string str){// iterative code
     int hi = str.size()-1;
     int lo = 0;
     bool flag = true;
     while(hi>=lo){
          if(str[lo]!=str[hi]){
             flag = false;
             break;
          } 
          hi--;
          lo++;
     }
     if(flag==true) cout<<"Word is palindrome";
     else cout<<"Word is not a palindrome ";
}
bool palindromerec(string str, int i, int j){
     if(i>j) return true;
     if(str[i]!=str[j]) return false;
     else return palindromerec(str,i+1,j-1);
}
int main(){
     string str;
     cout<<"Enter word : ";
     getline(cin,str);
     bool flag = palindromerec(str,0,str.size()-1);
     if(flag==true) cout<<"Word is palindrome";
     else cout<<"Word is not a palindrome ";
     // int n;
     // cout<<"Enter no of digits : ";
     // cin>>n;
     // vector<int>v(n);
     // cout<<"Enter Number : ";
     // for(int i=0; i<n; i++){
     //      cin>>v[i];
     // }
}