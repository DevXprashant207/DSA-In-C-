#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue< int, vector<int> , greater<int> > pq;
    pq.push(19);// min 19
    pq.push(89);// min 19
    pq.push(9); // min 9
    pq.push(-9);// min -9
    cout<<pq.top()<<endl;
    pq.pop();
    pq.pop();
    cout<<pq.top()<<endl;
}