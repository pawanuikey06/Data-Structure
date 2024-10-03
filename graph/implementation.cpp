#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include<queue>
#include <algorithm>
using namespace std;

class Graph {
public:
    map<int, list<int>> adjlist;

    void addEdge(int direction, int u, int v) {
        if (direction == 1) {
            adjlist[u].push_back(v);
        } else {
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
    }

    void print() {
        for (auto &adj : adjlist) {
            cout << adj.first << " -> [ ";
            for (auto &neighbours : adj.second) {
                cout << neighbours << " ";
            }
            cout << "] " << endl;
        }
    }

    void BFS(int src, vector<int>& Result) {
        queue<int> q;
        vector<bool> visited(8, false);
        q.push(src);
        visited[src] = true;
        while (!q.empty()) {
            int front = q.front(); q.pop();
            Result.push_back(front);
            for (auto &child : adjlist[front]) {
                if (!visited[child]) {
                    q.push(child);
                    visited[child] = true;
                }
            }
        }
    }

    void DFS(int src, vector<int>& Result, vector<bool>& visited) {
        visited[src] = true;
        Result.push_back(src);
        for (auto &child : adjlist[src]) {
            if (!visited[child]) {
                DFS(child, Result, visited);
            }
        }
    }

    void BFStopoLogicalSort() {
        vector<int> indegree(8, 0);
        for (auto &node : adjlist) {
            for (auto &child : node.second) {
                indegree[child]++;
            }
        }
        int count =0;
        queue<int> q;
        for (int i = 1; i <= 7; i++) {
            if (indegree[i] == 0) {
                q.push(i);
                count++;
            }
        }
        while (!q.empty()) {
            int front = q.front(); q.pop();
            cout << " " << front;
            for (auto &child : adjlist[front]) {
                indegree[child]--;
                if (indegree[child] == 0) {
                    q.push(child);
                    count++;
                }
            }
        }
        cout<<endl;
        if(count==7) {
            cout<<" Cycle Not present"<<endl;
        }
    }

    void DFSTOPO(int vertex, vector<bool>& visited, stack<int>& Stack) {
        visited[vertex] = true;
        for (auto &child : adjlist[vertex]) {
            if (!visited[child]) {
                DFSTOPO(child, visited, Stack);
            }
        }
        Stack.push(vertex);
    }

    void DFSTopologicalSort() {
        stack<int> Stack;
        vector<bool> visited(8, false);
        
        for (int i = 1; i <= 7; i++) {
            if (!visited[i]) {
                DFSTOPO(i, visited, Stack);
            }
        }

        while (!Stack.empty()) {
            cout << " " << Stack.top();
            Stack.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g;
    vector<int> Result;
    g.addEdge(1, 1, 2);
    g.addEdge(1, 2, 4);
    g.addEdge(1, 4, 5);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 5, 6);
    g.addEdge(1, 6, 7);

    g.print();

    g.BFS(1, Result);
    // BFS Traversal 
    cout << "BFS TRAVERSAL" << endl;
    for (auto &ele : Result) {
        cout << " " << ele;
    }
    cout << endl;

    vector<bool> visited(8, false);
    vector<int> dfs;
    g.DFS(1, dfs, visited);
    cout << "DFS TRAVERSAL" << endl;
    for (auto &ele : dfs) {
        cout << " " << ele;
    }
    cout << endl;

    cout << "TOPOLOGICAL SORT (BFS-based)";
    g.BFStopoLogicalSort();
    cout << endl;

    cout << "TOPOLOGICAL SORT USING DFS" << endl;
    g.DFSTopologicalSort();

    return 0;
}
