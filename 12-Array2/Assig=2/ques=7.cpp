#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
int main(){
     vector<int>v;
     int p;
     cout<<"Enter size of array : ";
     cin>>p;
     for(int i=0; i<p; i++){
          int x;
          cin>>x;
          v.push_back(x);
     }
     vector<int>v2(v.size());
     for(int i=0; i<v2.size(); i++){
          v2[i] = v[ v2.size()-1-i];
     }
     bool flag = true;
     for(int i=0; i<p; i++){
          if(v[i]!=v2[i]){
               flag = false;
               break;
          }
     }
     if(flag==true) cout<<"This is a palindrome ";
     else cout<<"This is not a palindrome ";
     
     
}   
