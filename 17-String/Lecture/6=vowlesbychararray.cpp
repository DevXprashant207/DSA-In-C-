#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of string : ";
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++){
       cin>>s[i];
    }
    int count = 0;
    for(int i=0; i<n ; i++){
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
          count++;
     }
    }
    cout<<"No of vowels is : "<<count;
}