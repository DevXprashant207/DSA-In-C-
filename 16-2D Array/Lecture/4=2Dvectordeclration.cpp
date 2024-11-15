#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1(3,8);
    cout<<v1[0]<<endl;
    // 3 size and 2 sabme 2 aayega
    // int arr[3][4];
    vector<vector<int> > v(3, vector<int> (4,90));
   // isme 3 1Dvector(row) and har 1D vector me 4 size ka vector hai
   // and har element 2 hai
   cout<<v[0][1]<<endl;
   cout<<v.size()<<endl;
   cout<<v[0].size();
}