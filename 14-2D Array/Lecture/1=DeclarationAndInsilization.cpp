#include<iostream>
using namespace std;
int main(){
     //int brr[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{2,3,4,5,6},{5,6,7,8,9}};
     //int brr[4][3];
     // rows 4 = 0 to 3
     // columns 3 = 0 to 2
     int brr[3][3] = {1,2,3,4,5,6,7,8,9};
     for(int i=0; i<3; i++){
          for(int j=0; j<3; j++){
               cout<<brr[i][j]<<" ";
          }
          cout<<endl;
     }
}