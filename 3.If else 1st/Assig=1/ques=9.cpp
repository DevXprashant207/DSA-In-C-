#include<iostream>
using namespace std;
int main(){
     char ch;
     cout<<"Enter the character = ";
     cin>>ch;
     int n = (int)ch;
     if((n>=65 && n<=90) || (n>=97 && n<=122)){
          cout<<"The charcter is an alphabet.";
     }
     if(n>=48 && n<=57){
          cout<<"The character is a digit.";
     }
     if(n==33 || (n>=35 && n<=38) || n==64 || n==95 || n==45 ){
          cout<<"The character is a special character.";
     }
}