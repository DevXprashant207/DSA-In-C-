 #include<iostream>
 using namespace std;
 int main(){
     char ch;
     cout<<"Enter the character : ";
     cin>>ch;
     int n = (int)ch;
     if((n>=65 && n<=90) || (n>=97 && n<=122)){
          cout<<"This character is an alphabet.";
     }
     else{
          cout<<"This is not an alphabte.";
     }
 }