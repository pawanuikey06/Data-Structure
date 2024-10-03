#include<iostream>
#include<map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    public:  map<int ,list<int>>adjlist;
             
            
      void addEdge(int direction ,int u , int v){
        if(direction==1){
            adjlist[u].push_back(v);
        }else{
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
      }

      void print(){
        for(auto &adj :adjlist){
            cout<<adj.first<<"-> [ ";
            for(auto &neighbours :adj.second ){
                cout<<neighbours<<" ";
            }
            cout<<"] "<<endl;
        }
      }
      void BFS(int src ,vector<int>&Result){
        queue<int>q;
        int visited[8]{false};
        q.push(src);
        visited[src]=1;
        while(!q.empty()){
            int front =q.front(); q.pop();
            Result.push_back(front);
            for(auto &child :adjlist[front]){
                if(!visited[child]){
                    q.push(child);
                    visited[child]=1;
                }

            }
        }
        
      }

      void DFS(int src ,vector<int>&Result,int *visited){
           visited[src]=1;
           Result.push_back(src);
           for(auto & child :adjlist[src]){
             if(!visited[child]){
                
                DFS(child,Result,visited);
             }
           }

      }
    
};
 
 
 
int main(){
    Graph g;
    vector<int>Result;
    g.addEdge(0,1,2);
    g.addEdge(0,1,4);
    g.addEdge(1,1,3);
    g.addEdge(0,4,5);
    g.addEdge(0,4,3);
    g.addEdge(0,2,3);
    g.addEdge(0,2,7);
    g.addEdge(0,2,6);
    g.addEdge(0,3,5);
    g.addEdge(0,5,6);
    g.addEdge(1,7,6);
    g.addEdge(1,2,5);
    g.print();
    g.BFS(1,Result);
    // BFS Traversal 
    cout<<"BFS TRAVERSAL"<<endl;
    for(auto &ele :Result){
        cout<<" "<<ele;
    }
    cout<<endl;
    int visited[8]{false};
    vector<int>dfs;
    g.DFS(1,dfs,visited);
    cout<<"DFS TRAVERSAL"<<endl;
    for(auto &ele :dfs){
        cout<<" "<<ele;
    }
    return 0;
}