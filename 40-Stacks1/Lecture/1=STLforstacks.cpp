#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int> st;
   cout<<st.size()<<endl; // 0
   st.push(10); // 1
   st.push(20); // 2
   st.push(30); // 3
   st.push(40); // 4
   st.push(50); // 5
   while(st.size()>0){
       cout<<st.top()<<" ";
       st.pop();
   }
   cout<<endl;
   cout<<st.size()<<endl; // 5
//    cout<<st.top()<<endl; 
//    st.pop(); // 4
//    cout<<st.size()<<endl; // 4
//    cout<<st.top()<<endl;
}