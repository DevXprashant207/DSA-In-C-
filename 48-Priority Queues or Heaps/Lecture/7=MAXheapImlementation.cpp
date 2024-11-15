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
          
     }
     void pop(){
          
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