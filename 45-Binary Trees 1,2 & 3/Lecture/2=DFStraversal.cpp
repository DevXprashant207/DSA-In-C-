#include<iostream>
using namespace std;
class Node{
 public: 
    int val;
    Node* left;
    Node* right;
    Node(int val){
       this->val = val;
       this->left = NULL;
       this->right = NULL;
    }
};
void preordertraversal(Node* root){
     if(root==NULL) return;
     cout<<root->val<<" ";
     preordertraversal(root->left);
     preordertraversal(root->right);
}
void inordertraversal(Node* root){
     if(root==NULL) return;
     inordertraversal(root->left);
     cout<<root->val<<" ";
     inordertraversal(root->right);
}
void postordertraversal(Node* root){
     if(root==NULL) return;
     postordertraversal(root->left);
     postordertraversal(root->right);
     cout<<root->val<<" ";
}
int main(){
     Node* a = new Node(1);
     Node* b = new Node(2);
     Node* c = new Node(3);
     Node* d = new Node(4);
     Node* e = new Node(5);
     Node* f = new Node(6);
     Node* g = new Node(7);
     Node* h = new Node(8);
     Node* i = new Node(9);
     a->left  = b;
     a->right = c;
     b->left  = d;
     b->right = e;
     c->left = f;
     c->right = g;
     d->left = h;
     d->right = i;
     preordertraversal(a);
     cout<<endl;
     inordertraversal(a);
     cout<<endl;
     postordertraversal(a);
     cout<<endl;

}