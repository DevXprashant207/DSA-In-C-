#include<iostream>
#include<vector>
using namespace std;
void change (vector<int>b){
     b[0] = 12;// yaha pass by value ho raha hai
     b[2] = 11;
     for(int i=0; i<b.size(); i++){
          cout<<b[i]<<" ";
     } 
     cout<<endl;
}
void pointchange(vector<int>&b){
     b[0] = 23;// yaha pass by refrence ho raha hai
     b[2] = 56;
}
int main(){
     vector<int>v;
      v.push_back(56);
     v.push_back(67);
     v.push_back(57);
     v.push_back(78);
     v.push_back(89);
     for(int i=0; i<v.size(); i++){
          cout<<v[i]<<" ";
     } 
     cout<<endl;
     change(v);
     for(int i=0; i<v.size(); i++){
          cout<<v[i]<<" ";
     } 
     cout<<endl;
     pointchange(v);
     for(int i=0; i<v.size(); i++){
          cout<<v[i]<<" ";
     } 
     cout<<endl;
}