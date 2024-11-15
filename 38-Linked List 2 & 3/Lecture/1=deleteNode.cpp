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
Node* deletenode(Node* head, Node* target){// delete by giving node 
     if(head==target){
          head = head->next;
          return head;
     }
     Node* temp = head;
     while(temp->next!=target){
          temp = temp->next;
     }
     temp->next = temp->next->next;
     return head;
     
}
Node* deletenodevalue(Node* head, int  targetvalue){// delete by giving node 
     if(head->val==targetvalue){
          head = head->next;
          return head;
     }
     Node* temp = head;
     while(temp->next->val!=targetvalue){
          temp = temp->next;
     }
     temp->next = temp->next->next;
     return head;
     
}
void display(Node* temp){
     while(temp!=NULL){
          cout<<temp->val<<" ";
          temp = temp->next;
     }
     cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    Node* head = a;
    display(head);
    head = deletenodevalue(head,30);
    display(head);
}