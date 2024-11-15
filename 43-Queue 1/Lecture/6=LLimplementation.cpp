#include<iostream>
using namespace std;
class Node{// user define data type
public :
    int val;
    Node* next;
    Node(int val){
         this->val = val;
         this->next = NULL;
    }
}; 
class Queue{// user define Data structure
public:
     Node* head;
     Node* tail;
     int s;
     Queue(){
          head = tail = NULL;
          s = 0;
     }
     void push(int val){
          Node* temp = new Node(val);
          if(s==0) head=tail=temp;
          else{
               tail->next = temp;
               tail = temp;
          }
          s++;
     }
     void pop(){
          if(s==0){
               cout<<"Queue is empty !";
               return;
          }
          Node* temp = head;
          head = head->next;
          s--;
          delete(temp);// no wastage
     }
     int front(){
          if(s==0){
               cout<<"Queue is empty !";
               return -1;
          }
          return head->val;
     }
     int back(){
          if(s==0){
               cout<<"Queue is empty !";
               return -1;
          }
          return tail->val;
     }
     int size(){
          return s;
     }
     bool empty(){
          if(s==0) return true;
          else return false;
     }
     void display(){
          Node* temp = head;
          while(temp!=NULL){
               cout<<temp->val<<" ";
               temp = temp->next;
          }
          cout<<endl;
     }
     
}; 
int main(){
     Queue q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     cout<<q.front()<<endl;
     cout<<q.back()<<endl;
     cout<<q.size()<<endl;
     cout<<q.empty()<<endl;
     q.display();
     q.pop();
     q.push(60);
     q.push(40);
     q.push(50);
     q.pop();
     q.push(60);
     cout<<q.front()<<endl;
     cout<<q.back()<<endl;
     cout<<q.size()<<endl;
     cout<<q.empty()<<endl;
     q.display();
}