#include<iostream>
using namespace std;
int main(){
     int arr[] = {3,5,7,8,7,54,3,5};
     int* ptr = arr;// giving address
     cout<<ptr<<endl;
     cout<<&arr[0]<<endl;
     cout<<ptr[3]<<endl;// valr print by pointer
     ptr[3] = 45;// updation by pointer
     for(int i=0; i<=7; i++){// first method for printing
          cout<<ptr[i]<<" ";
     }
     cout<<endl;
     for(int i=0; i<=7; i++){// second method for printing
          cout<<*ptr<<" ";
          ptr++;// address shift by 4 bytes, means next array element
     }
     cout<<endl;
     for(int i=0; i<=7; i++){
          cout<<i[arr]<<" ";
     }
     cout<<endl;
     ptr = arr;
     *ptr = 6 ;// ptr[0] = 6, poiting 1st element
     ptr++;// address shift to next(2nd) element
     *ptr = 8;
     ptr--;// 1st element address
     *ptr = 9;
     for(int i=0; i<=7; i++){
          cout<<*ptr<<" ";
          ptr++;
     }
     cout<<endl;
     // for(int i=0; i<=7; i++){
     //      cout<<i[ptr]<<" ";
     // }
     // cout<<endl;
     

}