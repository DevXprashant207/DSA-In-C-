#include<iostream>
#include<queue>
#include<unordered_map>
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
void topview(Node* root){
     unordered_map<int,int> m;
     queue< pair<Node*,int> > q;
     pair<Node*,int> r;
     r.first = root;
     r.second = 0;
     q.push(r);
     while(q.size()>0){
          // visit in queue and bahar nikal do 
          Node* temp = (q.front()).first;
          int level = (q.front()).second;
          q.pop(); 
          // if level not present in map
          if(m.find(level)==m.end()){
               m[level] = temp->val;
          }
          // if left is null -1 level and push in queue
          if(temp->left!=NULL){
               pair<Node*, int> p;
               p.first = temp->left;
               p.second = level-1;
               q.push(p);
          } 
          // if right is null +1 level and push in queue
          if(temp->right!=NULL){
               pair<Node*, int> p;
               p.first = temp->right;
               p.second = level+1;
               q.push(p);
          }  
     }
     int minlevel = INT_MAX;
     int maxlevel = INT_MIN;
     for(auto x : m ){
          int level = x.first;
          minlevel = min(minlevel,level);
          maxlevel = max(maxlevel,level);
     }
     for(int i=minlevel; i<=maxlevel; i++){
          cout<<m[i]<<" ";
     }
     cout<<endl;
}
int main(){
    // construct
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    leveldisplay(root);
    topview(root);
}