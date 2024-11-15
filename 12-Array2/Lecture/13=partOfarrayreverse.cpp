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
     v.push_back(56);
     v.push_back(67);
     v.push_back(57);
     v.push_back(78);
     v.push_back(89);
     v.push_back(55);
     display(v);
     // for(int i=2, j=4; i<=j; i++,j--){
     //    int temp = v[i];
     //    v[i] = v[j];
     //    v[j] = temp;
     // }
     reversepart(0,4,v);
     display(v);
     
}   
