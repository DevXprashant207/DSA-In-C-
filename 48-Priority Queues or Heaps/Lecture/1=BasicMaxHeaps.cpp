#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(19);
    pq.push(89);
    pq.push(9);
    pq.push(-9);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}