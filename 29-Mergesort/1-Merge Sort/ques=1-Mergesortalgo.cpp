#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
     int i=0,j=0,k=0;
     while(i<a.size() && j<b.size()){
          if(a[i]>b[j]) v[k++] = b[j++];
          else v[k++] = a[i++];
          if(i==a.size()) {
               while(j<b.size()){
                    v[k++] =b[j++];
               }
          }
          if(j==b.size()) {
               while(i<a.size()){
                    v[k++] =a[i++];
               }
          }
     }
}
void mergesort(vector<int>& v){
     int n = v.size();
     if(n==1) return;
     int n1 = n/2, n2 = n- n/2;
     vector<int> a(n1),b(n2);
     // copy paste
     for(int i=0; i<n1; i++) a[i] = v[i];
     for(int i=0; i<n2; i++) b[i] = v[i+n1];
     // magic
     mergesort(a);
     mergesort(b);
     // merge
     merge(a,b,v);
     a.clear();
     b.clear();
}
int main(){
    int n;
    cout<<"Enter size 0f array : ";
    cin>>n;
    cout<<"Enter Array elements -\n";
    vector<int> v(n);
    for(int i=0; i<n; i++){
       cin>>v[i];
    }
    cout<<endl;
    mergesort(v);
    cout<<"Sorted Array is -\n";
    for(int i=0; i<n; i++){
      cout<<v[i]<<" ";
    }
}