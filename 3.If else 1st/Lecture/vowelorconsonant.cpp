 #include<iostream>
 using namespace std;
 int main(){
     char ch;
     cout<<"Enter the character : ";
     cin>>ch;
     int n = (int)ch;
     if((n>=65 && n<=90) || (n>=97 && n<=122)){
          if(ch=='a'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='e'|| ch=='A'|| ch=='I'|| ch=='O'|| ch=='U'|| ch=='E'){
               cout<<"This character is a vowel.";
          }
          else {
               cout<<"This character is a consonant.";
          }
     }
     else{
          cout<<"This is not an alphabte.";
     }
 }