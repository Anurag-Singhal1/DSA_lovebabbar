#include<bits/stdc++.h>
#include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<stack>
// #include<vector>
// #include<algorithm>                                     // to make use of stl reverse fucntion (vector)
using namespace std;

// shortest distance by bfs algorithm 
class Graph{
    public:
    unordered_map<int,list<pair<int,int> > > adjList;
    // 1- directed graph,    0 - undirected graph

    void addEdge(int u, int v, int wt, bool  direction){
        adjList[u].push_back({v,wt});
        if(direction==0){
            adjList[v].push_back({u,wt});
        }
    }
    void printAdjList(){
        for(auto i : adjList){
            cout<<i.first<<"-> ";
            for(auto nbr : i.second){
                cout<<"("<<nbr.first<<", "<<nbr.second<<"), ";
            }cout<<endl;
        }
    }
    void shortestPathBfs(int src, int dest){
        queue<int> q;
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;

        q.push(src);                                 // initial stpes for src
        visited[src] = 1;                            // 1 means true
        parent[src] = -1;

        while(!q.empty()){
            int fNode = q.front();
            q.pop();

            for(auto nbr : adjList[fNode]){              // nbr is list<pair<int,int> >
                if(!visited[nbr.first]){                 // nbr.second to bs neighbours ki list hai na
                    q.push(nbr.first);
                    visited[nbr.first] = 1;
                    parent[nbr.first] = fNode; 
                }
            }
        }
        vector<int> ans;            // store path in ans from dest to src after traversing the parent array 
        int node  = dest;
        while(node!=-1){
            ans.push_back(node);
            node = parent[node];
        }
        reverse(ans.begin(),ans.end());           // 0 -> 5 -> 4
        cout<<"Printing the Ans : "<<endl;
        for(auto i:ans){
            cout<<i<<", ";
        }cout<<endl;
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,1,0);             // undirected edge 
    g.addEdge(1,2,1,0);
    g.addEdge(2,3,1,0);
    g.addEdge(3,4,1,0);
    g.addEdge(0,5,1,0);
    g.addEdge(5,4,1,0);
    g.addEdge(0,6,1,0);
    g.addEdge(6,7,1,0);
    g.addEdge(7,8,1,0);
    g.addEdge(8,4,1,0);

    g.printAdjList();

    int src = 0;
    int dest = 4;

    g.shortestPathBfs(src, dest);

    return 0;
}