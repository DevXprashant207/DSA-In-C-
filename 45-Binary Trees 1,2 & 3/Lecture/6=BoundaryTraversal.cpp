#include<iostream>
#include<queue>
#include<climits>
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
Node* construct(int arr[], int n){
     queue<Node*> q;
     Node* root = new Node(arr[0]);
     q.push(root);
     int i = 1;
     int j = 2;
     while(q.size()>0 && i<n){
          Node* temp = q.front();
          q.pop();
          Node* l;
          Node* r;
          if(arr[i]!=INT_MIN) l = new Node(arr[i]);
          else l = NULL;
          if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
          else r = NULL;
          temp->left = l;
          temp->right = r;
          if(l!=NULL) q.push(l);
          if(r!=NULL) q.push(r);
          i += 2;
          j += 2;
     }
     return root;
}
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
          nthlevel(root,i,1);
          cout<<endl;
     }
}
void leftboundary(Node* root){
     if(root==NULL) return;
     if(root->left==NULL && root->right==NULL) return;
     cout<<root->val<<" ";
     leftboundary(root->left);
     if(root->left==NULL) leftboundary(root->right);
}
void BottomBoundary(Node* root){
     if(root==NULL) return;
     if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
     BottomBoundary(root->left);
     BottomBoundary(root->right);
}
void rightboundary(Node* root){
     if(root==NULL) return;
     if(root->left==NULL && root->right==NULL) return;
     rightboundary(root->right);
     if(root->right==NULL) rightboundary(root->left);
     cout<<root->val<<" ";
}
void boundary(Node* root){
    leftboundary(root);
    BottomBoundary(root);
    rightboundary(root->right);
}
int main(){
    // construct
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    //leveldisplay(root);
    //boundary traversal
    boundary(root);
}