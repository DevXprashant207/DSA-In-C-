#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
void sort(vector<int>& v){
     int p = v.size();
     int i = 0;
     int j = p-1;
     while(i<j){
          if(v[i]==1 && v[j]==0){
               v[i]=0;
               v[j]=1;
               i++;
               j--;
          } 
          if(v[j]==1) j--;
          if(v[i]==0) i++;
          //if(i>j) break;
          // we can also use else if in both or one 
     }
}

int main(){
     int n; 
     cout<<"Enter the size of array : ";
     cin>>n;
     vector<int>v;
     for(int i=0; i<n; i++){
          int x;
          cin>>x;
          v.push_back(x);
     }
     sort(v);
     display(v);
}   
