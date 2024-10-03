#include<iostream>
#include<stack>
#include<unordered_map>
#include<list>
#include<map>
#include<queue>

using namespace std;

class Graph{

    public:
          unordered_map<int,list<int>>adj;
    void addedge(int u , int v , bool direction){
        if(direction ==1){
            adj[u].push_back(v);
        }else if(direction==0){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout<<"printing Nodes of Graph"<<endl;
        printlist();

    }
    void printlist(){
        for(auto node : adj){
            cout<<node.first<<"-> { ";
            for(auto nbr : node.second){
                cout<<nbr<<" ";
            }
            cout<<" }"<<endl;
        }
    }
    void topologicalSort(int src , map<int,bool>&vis ,stack<int>&st){
    vis[src]=1;
    for(auto nbr :adj[src]){
        if(!vis[nbr]){
            topologicalSort(nbr,vis,st);
        }
    }
    st.push(src);
  }
  void topoBFS(){
    queue<int>q;
    map<int ,int>indegree;
    for(auto node : adj){
        for(auto nbr : node.second){
            indegree[nbr]++;
        }
    }
    for(int node =1 ;node<9;node++){
        if(indegree[node]==0){
            q.push(node);
        }
    }
    while(!q.empty()){
        int frontNode =q.front();
        q.pop();
        cout<<frontNode<<" ,";
        for(auto &nbr :adj[frontNode]){
            indegree[nbr]--;
            if(indegree[nbr]==0){
                q.push(nbr);
            }
        }
    }

  }

};


int main(){

    Graph g;
    g.addedge(1,2,1);
    g.addedge(1,3,1);
    g.addedge(2,4,1);
    g.addedge(1,9,1);
    g.addedge(2,5,1);
    g.addedge(3,5,1);
    g.addedge(3,6,1);
    g.addedge(5,7,1);
    g.addedge(7,8,1);
    g.addedge(6,8,1);
    g.addedge(8,9,1);
    g.addedge(7,9,1);
    map<int ,bool>vis;
    stack<int>st;
    g.topologicalSort(1,vis,st);
    cout<<"printing topological sorted elements :"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
   g.topoBFS();


    return 0;
}