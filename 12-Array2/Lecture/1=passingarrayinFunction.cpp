#include<iostream>
using namespace std;
void display(int a[],int size){// int a[] is a pointer int* a
     for(int i=0; i<=3; i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
     return;
}
void change (int b[], int size){// int b[] is a pointer int* b
     b[0] = 67;
     b[2] = 56;
     return;
}
int main(){
     int arr[4] = {2,4,5,6};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout<<size<<" ";
     // accesing element of array in another function
     // updation, pass by value or pass by refrence 
     display(arr,size);
     change(arr,size);
     display(arr,size);
}