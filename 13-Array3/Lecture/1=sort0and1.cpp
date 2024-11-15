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
     int noz = 0;
     int noo = 0;
     for(int i=0; i<p; i++){
          if(v[i]==0) noz++;
          else noo++;
     }
     for(int i=0; i<p; i++){
          if(i<noz) v[i]=0;
          else v[i]=1;
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
     //sor(v.begin(), v.end(0));
     // int noz = 0;
     // int noo = 0;
     // for(int i=0; i<n; i++){
     //      if(v[i]==0) noz++;
     //      else noo++;
     // }
     // for(int i=1; i<=noz; i++){
     //      cout<<0<<" ";
     // }
     // for(int i=1; i<=noo; i++){
     //      cout<<1<<" ";
     // }
    
}   
