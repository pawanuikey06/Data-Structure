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
    

    return 0;
}