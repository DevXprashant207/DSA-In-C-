#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
     a[0] = 9;
}
void change2D(int arr[3][3]){
     arr[0][0] = 199;
}
int main(){
     int a[] = {1,2,3};
     cout<<a[0]<<endl;
     change(a);
     cout<<a[0]<<endl;

     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
     cout<<arr[0][0]<<endl;
     change2D(arr);
     cout<<arr[0][0]<<endl;
     // on passing array into function in 1D array it is not neccessary to give size of array
     // but in two array it is must to give columns and rows due to this we use 2D vectors

}