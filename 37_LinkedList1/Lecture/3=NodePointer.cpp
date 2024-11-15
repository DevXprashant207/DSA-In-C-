#include<iostream>
using namespace std;
class Node{// linked List Node
public:
    int val;
    Node* next;
    Node(int val){
       this->val = val;
       this->next = NULL;
    }
};
// iterative display
void display(Node* head){
      Node* temp = head;
     while(temp!=NULL){
       cout<<temp->val<<" ";
       temp = temp->next;
     }
     cout<<endl;
}
// recursive display
void recdisplay(Node* temp){
     if(temp==NULL) return;
      cout<<temp->val<<" ";
      recdisplay(temp->next);
}
// reverse linked list
void reversedisplay(Node* temp){
     if(temp==NULL) return;
     reversedisplay(temp->next); 
      cout<<temp->val<<" ";
      
}
// size of linked list
int size (Node* head){
     Node* temp = head;
     int n = 0;
     while(temp!=NULL){
       n++;
       temp = temp->next;
     }
     return n;
}
void inserAtend(Node* head,int val){
     Node* t = new Node(val);
     while(head->next!=NULL) head =head->next;
     head->next = t;
}
int main(){
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);
   Node* e = new Node(50);
   a->next = b;
   b->next = c;
   c->next = d;
   d->next = e;
   cout<<a->next->next->next->val<<endl;
   display(a);
//    recdisplay(a);
//    cout<<endl;
//    reversedisplay(a);
//    cout<<endl;
   inserAtend(a,89);
   display(a);
   cout<<"size is  "<<size(a);
}