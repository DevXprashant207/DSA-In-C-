#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
void arrange(vector<int>& nums){
     // one pass solution = Dutch solution
     int n = nums.size();
        int l = 0;
        int m = 0;
        int h = n-1;
        while(m<=h){
            if(nums[m]==2){
                int temp = nums[m];
                nums[m] = nums[h];
                nums[h] = temp;
                h++;
            }
            if(nums[m]==0){
                    int temp = nums[m];
                    nums[m] = nums[l];
                    nums[l] = temp;
                    l++;
                    m++;
            }
            if(nums[m]==1){
                   m++;
            }
        }     
        return;
     // two pass solution
     // int p = nums.size();
     // int noz = 0;
     // int noo = 0;
     // int notwo = 0;
     // for(int i=0; i<p; i++){
     //      if(nums[i]==0) noz++;
     //      else if(nums[i]==1) noo++;
     //      else notwo++;
     // }
     // for(int i=0; i<p; i++){
     //      if(i<noz) nums[i]=0;
     //      else if(i<(noz+noo)) nums[i]=1;
     //      else nums[i]=2;
     // }
     // return;
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
