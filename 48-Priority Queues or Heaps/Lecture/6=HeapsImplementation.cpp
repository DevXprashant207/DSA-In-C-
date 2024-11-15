#include<iostream>
using namespace std;
class MinHeap{
public:
     int arr[50];
     int idx ;
     MinHeap(){
          idx = 1;
     }
     int top(){
          return arr[1];
     }
     void push(int x){
          arr[idx ] =x;
          int i = idx;
          idx++;
          // swaping of chid with it parent i/2 till i==1
          while(i!=1){
               int parent = i/2;
               if(arr[i]<arr[parent]){
                    swap(arr[i],arr[parent]);
               }
               else break;
               i = parent;
          }
     }
     void pop(){
          idx--;
          arr[1] = arr[idx];
          // rearrangement
          int i = 1;
          while(true){
               int left = 2*i, right = 2*i+1;
               if(left>idx-1) break;
               if(right>idx-1){
                    if(arr[i]>arr[left]){
                         swap(arr[i],arr[left]);
                         i = left;
                    }
                    break;
               }
               if(arr[left]<arr[right]){// left is minimum
                    if(arr[i]>arr[left]){
                         swap(arr[i],arr[left]);
                         i = left;
                    }
                    else break;
               }
               else{// right is minimum
                   if(arr[i]>arr[right]){
                         swap(arr[i],arr[right]);
                         i = right;
                    }
                    else break;
               }
          }
     }
     int size(){
          return idx-1;
     }
     void display(){
          for(int i=1; i<=idx-1; i++){
               cout<<arr[i]<<" ";
          }
          cout<<endl;
     }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(9);
    pq.push(-10);
    pq.push(0);
    pq.push(-1);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.display();
    pq.push(7);
    pq.push(8);
    pq.pop();
    pq.display();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
}