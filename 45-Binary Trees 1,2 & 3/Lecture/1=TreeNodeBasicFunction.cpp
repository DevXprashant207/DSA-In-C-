#include<iostream>
#include<climits>
using namespace std;
class Node{
public: 
     int val;
     Node* right;
     Node* left;
     Node(int val){
          this->val = val;
          this->left = NULL;
          this->right = NULL;
     }
};
void display(Node* root){
      if(root==NULL) return;
      cout<<root->val<<" ";
      display(root->left);
      display(root->right);
}
int sum(Node* root){
      if(root==NULL) return 0;
      return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
      if(root==NULL) return 0;
      return 1 + size(root->left) + size(root->right);
}
int mx(Node* root){
     if(root==NULL) return INT_MIN;
     return max(root->val,max(mx(root->left),mx(root->right)));
}
int product(Node* root){
      if(root==NULL) return 1;
      return root->val * product(root->left) * product(root->right);
}
int mn(Node* root){
     if(root==NULL) return INT_MAX;
     return min(root->val,min(mn(root->left),mn(root->right)));
}
int level(Node* root){
      if(root==NULL) return 0;
      return 1 + max(level(root->left),level(root->right));
}
int height(Node* root){
      return level(root) - 1;
}
int main(){
   Node* a = new Node(1);
   Node* b = new Node(2);
   Node* c = new Node(3);
   Node* d = new Node(4);
   Node* e = new Node(5);
   Node* f = new Node(6);
   Node* g = new Node(8);
   Node* h = new Node(9);
   // conections
   a->left  = b;
   a->right = c;
   b->left  = d;
   b->right = e;
   c->left  = f;
   c->right = g;
   g->left = h;
//    display(a);
//    cout<<endl;
//    cout<<sum(a)<<endl;
//    cout<<mx(a)<<endl;
//    cout<<product(a)<<endl;
//    cout<<mn(a)<<endl;
 //  cout<<level(a)<<endl;
    cout<<height(a)<<endl;
}