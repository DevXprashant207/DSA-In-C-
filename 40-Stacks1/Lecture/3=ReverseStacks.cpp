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
int main(){
   stack<int> st;
   st.push(10); 
   st.push(20); 
   st.push(30); 
   st.push(40); 
   st.push(50);
   print(st);
   // st = 10 20 30 40 50
   stack<int> temp;
//    // using an extra array
//    int arr[st.size()];
//    int i = 0;
//    while(st.size()>0){
//        arr[i] = st.top();
//        i++;
//        st.pop();
//    }
//    // arr = 50 40 30 20 10
//    for(int j=0; j<=i-1 ;j++){
//        st.push(arr[j]);
//    }
//    // st = 50 40 30 20 10
//    print(st);
   
   // 10 20 30 40 50
   while(st.size()>0){
       temp.push(st.top());
       st.pop();
   }
   print(temp);
   // temp = 50 40 30 20 10
   stack<int> temp2;
   while(temp.size()>0){
       temp2.push(temp.top());
       temp.pop();
   }
   print(temp2);
   // temp2 = 10 20 30 40 50
   while(temp2.size()>0){
       st.push(temp2.top());
       temp2.pop();
   }
   print(st);
}