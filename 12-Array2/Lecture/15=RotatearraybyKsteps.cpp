#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
void reversepart(int i, int j, vector<int>& v){
     while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
     }
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
     int k;
     cout<<"Enter steps to rotate : ";
     cin>>k;
     if(k>=p){
          k = k % p;
     }
     reversepart(0,p-1-k,v);
     reversepart(p-k,p-1,v);
     reversepart(0,p-1,v);
     display(v);
     
}   
