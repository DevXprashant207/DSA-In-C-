#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
     if(st.size()==0) return;
     int x = st.top();
     st.pop();
     display(st);
     cout<<x<<" ";
     st.push(x);
}
void reverseRec(stack<int>& st){
     if(st.size()==0) return;
     cout<<st.top()<<" ";
     int x = st.top();
     st.pop();
     reverseRec(st);
     st.push(x);
}
void pushatbottom(stack<int>& st, int n){
     if(st.size()==0){
          st.push(n);
          return;
     }
     int x = st.top();
     st.pop();
     pushatbottom(st,n);
     st.push(x);
}
void reverse(stack<int>& st){
     if(st.size()==1) return;
     int x =st.top();
     st.pop();
     reverse(st);
     pushatbottom(st,x);
}
int main(){
   stack<int> st;
   st.push(10); 
   st.push(20); 
   st.push(30); 
   st.push(40); 
   st.push(50);
   display(st);
   cout<<endl;
   reverse(st);
   display(st);
}