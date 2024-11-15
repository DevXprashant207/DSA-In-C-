#include<iostream>
#include<queue>
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
int level(Node* root){
      if(root==NULL) return 0;
      return 1 + max(level(root->left),level(root->right));
}
void nthlevel(Node* root, int n, int l){
     if(root==NULL) return;
     if(l==n) {
          cout<<root->val<<" ";
          return;  
     }
     nthlevel(root->left,n,l+1);
     nthlevel(root->right,n,l+1);
}
void leveldisplay(Node* root){
     int n = level(root);
     for(int i=1; i<=n ;i++){
          nthlevelRev(root,i,1);
          cout<<endl;
     }
}
void nthlevelRev(Node* root, int n, int l){
     if(root==NULL) return;
     if(l==n) {
          cout<<root->val<<" ";
          return;  
     }
     nthlevelRev(root->right,n,l+1);
     nthlevelRev(root->left,n,l+1);
}
void levelorderdisplayQueue(Node* root){// BFS
     queue<Node*> q;
     q.push(root);
     while(q.size()>0){
          Node* temp = q.front();
          q.pop();
          cout<<temp->val<<" ";
          if(temp->right!=NULL) q.push(temp->right);
          if(temp->left!=NULL) q.push(temp->left);
     }
     cout<<endl;
}
int main(){
     Node* a = new Node(1);
     Node* b = new Node(2);
     Node* c = new Node(3);
     Node* d = new Node(4);
     Node* e = new Node(5);
     Node* f = new Node(6);
     Node* g = new Node(7);
     a->left  = b;
     a->right = c;
     b->left  = d;
     b->right = e;
     c->left = f;
     c->right = g;
     levelorderdisplayQueue(a);

}