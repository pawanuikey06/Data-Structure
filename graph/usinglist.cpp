#include<iostream>
#include<map>
#include<list>
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
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(1,3,1);
    g.addedge(2,3,1);
    return 0;
}