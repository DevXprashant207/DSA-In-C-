#include<iostream>
#include<vector>
using namespace std;
int c = 0;
int inversion(vector<int>& a,vector<int>& b){
    int count = 0;
    int i=0, j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
     int i=0,j=0,k=0;
     while(i<a.size() && j<b.size()){
          if(a[i]>b[j]) res[k++] = b[j++];
          else res[k++] =a[i++];
     }
     if(i==a.size())while(j<b.size()) res[k++]=b[j++];// a is at end
     if(j==b.size())while(i<a.size()) res[k++]=a[i++];// b is at end
}
void mergesort(vector<int>& v){
     int n=v.size();
     if(n==1) return;
     int n1 = n/2, n2 = n-n/2;
     vector<int> a(n1), b(n2);
     // copy pasting
     for(int i=0; i<n1; i++)a[i] = v[i];
     for(int i=0; i<n2; i++)b[i] = v[i+n1];
     // magic using recusrion
     mergesort(a);
     mergesort(b);
     // inversion count karenge
     c += inversion(a,b);
     //merge
     merge(a,b,v);
     a.clear();
     b.clear();
}
int main(){
     int n;
     cout<<"Enter size of Array : ";
     cin>>n;
     cout<<"Enter elements of array --\n";
     vector<int> v(n);
     for(int i=0; i<n;i++){
          cin>>v[i];
     }
     mergesort(v);
     for(int i=0; i<n;i++){
         cout<<v[i]<<" ";
     }
     cout<<"\nNumber of inversions are : "<<c;
}