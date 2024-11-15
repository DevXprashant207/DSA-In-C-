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

int main(){
    Node a(10);
    // cout<<a.next<<endl;
    // cout<<(a.next)->next<<endl;
    Node b(89);
    Node c(90);
    Node d(23);
    // forming linklist
    a.next = &b;
    b.next = &c;
    c.next = &d;
    Node temp = a;
    while(1){
       cout<<temp.val<<" ";
       if(temp.next==NULL) break;
       temp = *(temp.next);
    }
    cout<<endl;
     cout<<((a.next)->next)->val<<endl;;
    cout<<(((a.next)->next)->next)->val<<endl;
    (a.next)->val = 56;// change in v val
    cout<<(*(a.next)).val<<endl;
    cout<<(a.next)->val<<endl;
   

}
