#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>& q){
     int n = q.size();
     for(int i=1; i<=n; i++){
          int x = q.front();
          q.pop();
          cout<<x<<" ";
          q.push(x);
     }
     cout<<endl;
}
int main(){
     queue<int> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     q.push(60);
     display(q);
     // cout<<q.front()<<endl;
     // cout<<q.size()<<endl;
     // cout<<q.back()<<endl;
     // q.push(90);
     // q.pop();
     // display(q);
     //  cout<<q.front()<<endl;
     // cout<<q.size()<<endl;
     // cout<<q.back()<<endl;
}