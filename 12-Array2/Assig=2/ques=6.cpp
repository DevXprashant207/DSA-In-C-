#include<iostream>
#include<vector>
using namespace std;
int main(){
     // vector<int>v;
     // v.push_back(2);
     // v.push_back(2);
     // v.push_back(1);
     // v.push_back(1);
     // v.push_back(20);
     int  arr[] = {2,2,1,1,20};
     for(int i=0; i<5; i++){
          int uniq = 0;
          for(int j=0; j<5; j++){
               if(arr[i]==arr[j]) uniq++;
          }
          if(uniq==0){
               cout<<"Unique Number is : "<<arr[i];
               return 0;
          }
     }
     cout<<"Not unique element is present";
     return 0;
}