#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
void arrange(vector<int>& v){
     // DUTCH MEHTOD
        int n = v.size();
        int l = 0;
        int m = 0;
        int h = n-1;
        while(m<=h){
            if(v[m]==2){
                int temp = v[m];
                v[m] = v[h];
                v[h] = temp;
                h--;
            }
            if(v[m]==0){
                    int temp = v[m];
                    v[m] = v[l];
                    v[l] = temp;
                    l++;
                    m++;
            }
            if(v[m]==1){
                   m++;
            }
        }
         return;
//      int p = v.size();
//      int noz = 0;
//      int noo = 0;
//      int notwo = 0;
//      for(int i=0; i<p; i++){
//           if(v[i]==0) noz++;
//           else if(v[i]==1) noo++;
//           else notwo++;
//      }
//     for(int i=0; i<p; i++){
//      if(i<noz) v[i]=0;
//      else if(i<(noz+noo)) v[i]=1;
//      else v[i]=2;
//     }
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
     arrange(v);
     display(v);   
}   
