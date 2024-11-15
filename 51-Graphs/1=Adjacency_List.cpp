#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector< list<int> > graph;
int v; // no vertex
void add_edge(int src,int dest, bool bi_dir = true){
     graph[src].push_back(dest);
     if(bi_dir){
          graph[dest].push_back(src);
     }
}
void display(){
     for(int i=0; i<graph.size(); i++){
          cout<<i<<" -> ";
          for(auto el : graph[i]){
               cout<<el<<" , ";
          }
          cout<<"\n";
     }
}
int main(){
     cout<<"Enter no of vertex : ";
     cin>>v;
     graph.resize(v,list<int> ());
     int e;// no of edges
     cout<<"Enter no of edges : ";
     cin>>e;
     while(e--){
          int s,d;
          cin>>s>>d;
          add_edge(s,d, false);

     }
     display();
     return 0;
}

// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;

// vector<list<int>> graph;
// int v; // number of vertices

// void add_edges(int src, int dest, bool bi_dir = true) {
//     graph[src].push_back(dest);
//     if (bi_dir) {
//         graph[dest].push_back(src);
//     }
// }

// void display() {
//     for (int i = 0; i < graph.size(); i++) {
//         cout << i << " -> ";
//         for (auto el : graph[i]) {
//             cout << el << " , ";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     cin >> v;
//     graph.resize(v);
//     int e; // number of edges
//     cin >> e;
//     while (e--) {
//         int s, d;
//         cin >> s >> d;
//         add_edges(s, d);
//     }

//     display();

//     return 0;
// }
