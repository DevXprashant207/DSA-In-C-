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
void nthlevelOptimised(Node* root, int n, int l){
     if(root==NULL) return;
     if(l==n) {
          cout<<root->val<<" ";
          return;
     }
     nthlevelOptimised(root->left,n,l+1);
     nthlevelOptimised(root->right,n,l+1);
}
void nthlevel(Node* root, int n, int l){
     if(root==NULL) return;
     if(l==n) cout<<root->val<<" ";
     nthlevel(root->left,n,l+1);
     nthlevel(root->right,n,l+1);
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
     int n = 3;
     nthlevel(a,n,1);

}