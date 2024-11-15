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
class LinkedList{// user define Data structure
public:
     Node* head;
     Node* tail;
     int size;
     LinkedList(){
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
     int getAtidx(int idx){
          if(idx<0 || idx>=size){
               cout<<"Invalid Index"<<endl;
               return -1;
          }
          if(idx==0) return head->val;
          if(idx==size-1) return tail->val;
          else{
               Node* temp = head;
               for(int i=1; i<=idx; i++){
                    temp = temp->next;
               }
               return temp->val;
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
     LinkedList ll;
     ll.inserAtTail(78);//7
     ll.display();
     ll.inserAtTail(89);//6
     ll.display();
     ll.insertAtHead(67);//5
     ll.insertAtHead(90);//4
     ll.insertAtHead(95);//3
     ll.insertAtHead(23);//2
     ll.insertAtHead(56);//1
     ll.display();
     ll.insertAtidx(2,77);
     ll.display();
     ll.deleteAtHead();
     ll.deleteAtTail();
     ll.deleteAtidx(2);
     ll.display();
     // cout<<ll.getAtidx(3)<<endl;;
     // cout<<ll.size<<endl;
}