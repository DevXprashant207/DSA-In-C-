#include<iostream>
using namespace std;
class stack{
public:
   int arr[50];
   int idx;
   stack(){
      idx = -1;
   }
   void push(int val){
     if(idx==4){
          cout<<"Stack is Full !";
          return;
     }
      idx++;
      arr[idx] = val;
   }
   void pop(){
     if(idx==-1){
          cout<<"Stack is empty !";
          return;
     }
      idx--;
   }
   int size(){
      return idx+1;
   }
   int top(){
     if(idx==-1){
          cout<<"Stack is empty !";
           return -1;
     }
     return arr[idx];
   }
   void display(){
     int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
      }
      cout<<endl;
   }
};
int main(){
     stack st;
     cout<<st.size()<<endl;
     st.push(90);
     st.push(89);
     st.push(23);
     st.push(25);
     st.push(80);
     st.push(20);
     cout<<st.size()<<endl;
     cout<<st.top()<<endl;
}