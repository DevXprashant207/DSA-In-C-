#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
void reverse(vector<int>& v){
     int i = 0;
         int j = v.size()-1;
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
     reverse(v);
     //     int i = 0;
     //     int j = v.size()-1;
     //     while(i<=j){
     //         int temp = v[i];
     //         v[i] = v[j];
     //         v[j] = temp;
     //         i++;
     //         j--;
     //     }
     // use of two variable in 1 foer loop
     // for(int i=0, j=v.size()-1; i<=j; i++,j--){
     //    int temp = v[i];
     //    v[i] = v[j];
     //    v[j] = temp;
     // }
    display(v);
     
}   
