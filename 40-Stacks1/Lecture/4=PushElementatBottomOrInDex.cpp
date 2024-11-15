#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
     stack<int> temp;
     while(st.size()>0){
       temp.push(st.top());
       st.pop();
    }
    while(temp.size()>0){
       cout<<temp.top()<<" ";
       st.push(temp.top());
       temp.pop();
    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st, int n){
     stack<int> temp;
     while(st.size()>0){
       temp.push(st.top());
       st.pop();
     }
     st.push(n);
     while(temp.size()>0){
          st.push(temp.top());
          temp.pop();
     }
}
void pushAtIndex(stack<int>& st, int n, int idx){
     stack<int> temp;
     if(idx<=st.size() && idx>0){
        for(int i=st.size(); i>idx+1; i--){
          temp.push(st.top());
          st.pop();
        }
        st.push(n);
        while(temp.size()>0){
          st.push(temp.top());
          temp.pop();
         }
     }
     else cout<<"Invalid Index";
}
int main(){
   stack<int> st;
   st.push(10); 
   st.push(20); 
   st.push(30); 
   st.push(40); 
   st.push(50);
   cout<<"Current Stacks is : ";
   print(st);
   pushAtIndex(st,70,2);
   print(st);
   pushAtBottom(st,90);
   print(st);
}