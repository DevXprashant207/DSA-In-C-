#include<iostream>
#include<vector>
using namespace std;
class stack{
public:
  vector<int> v;
   stack(){
      
   }
   void push(int val){
      v.push_back(val);
   }
   void pop(){
     if(v.size()==0){
          cout<<"Stack is empty !";
          return;
     }
      v.pop_back();
   }
   int size(){
      return v.size();
   }
   int top(){
    if(v.size()==0){
          cout<<"Stack is empty !";
          return -1;
     }
     return v[v.size()-1];
   }
};
int main(){
     stack st;
     st.pop();
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