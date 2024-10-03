#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<algorithm>
using namespace std;

class Graph{
    public :
       map<int , list<int>>adjlist;
       void addedge(int u ,int v, bool direction){
           if(direction==1){
              adjlist[u].push_back(v);
           }else{
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
           }
           cout<<endl<<"printing adjlist"<<endl;
           printADJlist();
           cout<<endl;
       }

       void printADJlist(){
        for(auto i :adjlist){
            cout<<i.first<<"->{";
            for(auto neighbour :i.second){
                cout<<neighbour<<" ,";
            }
            cout<<"}"<<endl;
        }
       }
      void ShortestPath(int src ,int dest){
          queue<int>q;
          map<int,bool>visited;
          map<int,int>parent;
          parent[src]=-1;
          q.push(src);
          visited[src]=true;
          while(!q.empty()){
            int frontNode =q.front();
            q.pop();
            for(auto nbr : adjlist[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    parent[nbr]=frontNode;
                    visited[nbr] =true;

                }
            }
          }
          vector<int>ans;
          while(dest!=-1){
            ans.push_back(dest);
            dest =parent[dest];
            }
          
        reverse(ans.begin(),ans.end());
        for(auto i :ans){
            cout<<i<<" ";
        }
      }

};
int main(){
    Graph g;
    g.addedge(0,5,0);
    g.addedge(5,4,0);
    g.addedge(4,3,0);
    g.addedge(0,6,0);
    
    g.addedge(6,3,0);
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,3,0);
    g.ShortestPath(0,3);

    return 0;
}