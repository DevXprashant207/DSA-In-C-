#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {2,7,4,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    int mincost = 0;
    while(pq.size()>1){
       int x = pq.top();
       pq.pop();
       int y = pq.top();
       pq.pop();
       pq.push(x+y);
       mincost += (x+y);
    }
    cout<<mincost;
}