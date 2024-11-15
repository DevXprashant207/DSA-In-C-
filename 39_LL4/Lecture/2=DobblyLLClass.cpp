#include<iostream>
using namespace std;
class Node{
 public:
   int val;
   Node* next;
   Node* prev;
   Node(int val){
      this->val = val;
      this->next = NULL;
      this->prev = NULL;
   }
};
class DLL{// user define Data structure
public:
     Node* head;
     Node* tail;
     int size;
     DLL(){
          head = tail = NULL;
          size = 0;
     }
     void inserAtTail(int val){
          Node* temp = new Node(val);
          if(size==0) head=tail=temp;
          else{
               tail->next = temp;
               tail = temp;
          }
          size++;
     }
     void insertAtHead(int val){
          Node* temp = new Node(val);
          if(size==0) head=tail=temp;
          else{
               temp->next = head;
               head = temp;
          }
          size++;
     }
     void insertAtidx(int idx, int val){
          if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
          else if(idx==0) insertAtHead(val);
          else if(idx==size) inserAtTail(val);
          else{
               Node* t = new Node(val);
               Node* temp = head;
               for(int i=1; i<=idx-1; i++){
                    temp = temp->next;
               }
               t->next = temp->next;
               temp->next = t;
               size++;
          }
     }
     int getAtidx(int idx){// optimised
          if(idx<0 || idx>=size){
               cout<<"Invalid Index"<<endl;
               return -1;
          }
          if(idx==0) return head->val;
          if(idx==size-1) return tail->val;
          else{
               if(idx>size/2){
                    Node* temp = tail;
                    for(int i=1; i<(size-idx); i++){
                          temp = temp->prev;
                    }
                    return temp->val;
               }
               else{// idx<size/2
                    Node* temp = head;
                    for(int i=1; i<=idx; i++){
                         temp = temp->next;
                    }
                    return temp->val;
               }
          }
     }
     void deleteAtHead(){
          if(size==0){
               cout<<"List is empty !";
               return;
          }
          head = head->next;
          size--;
     }
     void deleteAtTail(){
          if(size==0){
               cout<<"List is empty !";
               return;
          }
          Node* temp = head;
          while(temp->next!=tail){
               temp = temp->next;
          }
          temp->next = NULL;
          tail = temp->next;
          size--;
     }
     void deleteAtidx(int idx){
          if(size==0){
               cout<<"List is empty !";
               return;
          }
          else if(idx<0 || idx>=size){
               cout<<"Invalid idx ";
               return;
          }
          else if(idx==0) return deleteAtHead();
          else if(idx==size-1) return deleteAtTail();
          else{
                Node* temp = head;
               for(int i=1; i<=idx-1; i++){
                    temp = temp->next;
               }
               temp->next = temp->next->next;
               size--;
          }
          
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
     DLL list;
     list.insertAtHead(10);
     list.inserAtTail(20);
     list.insertAtHead(30);
     list.inserAtTail(38);
     list.insertAtHead(45);
     list.insertAtHead(34);
     list.insertAtHead(34);
     list.display();
     cout<<list.size;
     cout<<endl;
     cout<<list.getAtidx(4);
     cout<<endl;
}