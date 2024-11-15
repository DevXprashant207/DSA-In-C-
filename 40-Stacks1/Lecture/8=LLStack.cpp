#include<iostream>
using namespace std;
class Node{
public:
   int val;
   Node* next;
   Node(int val){
      this->val = val;
      this->next = NULL;
   }
};
class stack{
public:
   Node* head;
   int size ;
   stack(){
      head = NULL;
      size = 0;
   }
   void push(int val){
     Node* temp = new Node(val);
     temp->next = head;
     head = temp;
     size++;
   }
   void pop(){
     if(head=NULL){
          cout<<"Stack is empty !";
          return;
     }
      size--;
   }
   int top(){
     if(head=NULL){
          cout<<"Stack is empty !";
           return -1;
     }
     return head->val;
   }
   void print(Node* temp){
       if(temp==NULL) return;
       print(temp->next);
       cout<<temp->val<<" ";
   }
   void display(){
      Node* temp = head;
      print(temp);
      cout<<endl;
   }
};
int main(){
     stack st;
     cout<<st.size<<endl;
     st.push(90);
     st.push(89);
     st.push(23);
     st.push(25);
     cout<<st.size<<endl;
     cout<<st.top()<<endl;
     st.display();
}