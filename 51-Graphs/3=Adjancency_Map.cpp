#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector< unordered_map<int,int> > graph;
int v; // no vertex
void add_edge(int src,int dest,int wt,bool bi_dir = true){
     graph[src][dest] = wt;
     if(bi_dir){
          graph[dest][src] = wt;
     }
}
void display(){
     for(int i=0; i<graph.size(); i++){
          cout<<i<<" -> ";
          for(auto el : graph[i]){
               cout<<"("<<el.first<<" , "<<el.second<<") , ";
          }
          cout<<"\n";
     }
}
int main(){
     cout<<"Enter no of vertex : ";
     cin>>v;
     graph.resize(v,unordered_map<int,int> ());
     int e;// no of edges
     cout<<"Enter no of edges : ";
     cin>>e;
     while(e--){
          int s,d,wt;
          cin>>s>>d>>wt;
          add_edge(s,d,wt);

     }
     display();
     return 0;
}
