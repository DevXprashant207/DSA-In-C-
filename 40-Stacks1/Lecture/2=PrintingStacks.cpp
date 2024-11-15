#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int> st;
   st.push(10); 
   st.push(20); 
   st.push(30); 
   st.push(40); 
   st.push(50);
   stack<int> temp;
   // reverse order printing
   while(st.size()>0){
       cout<<st.top()<<" ";
       temp.push(st.top());
       st.pop();
   }
   cout<<endl;
   // printing and putting back elements in stacks
   while(temp.size()>0){
       cout<<temp.top()<<" ";
       st.push(temp.top());
       temp.pop();
   }
   cout<<endl;
   cout<<st.top()<<endl;
   
}