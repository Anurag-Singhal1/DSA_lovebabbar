#include<bits/stdc++.h>
#include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<stack>
// #include<vector>
// #include<limits.h>                                      // to include INT_MAX  and INT_MIN   
// #include<algorithm>                                     // to make use of stl reverse fucntion (vector)
#include<set>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int> > adjList;
    // 1- directed graph,    0 - undirected graph

    void addEdge(int u, int v, bool  direction){
        adjList[u].push_back(v);
        if(direction==0){
            adjList[v].push_back(u);
        }
    }

    void findBridges(int src, int parent, int &timer, vector<int> &tin, vector<int> &low, 
        unordered_map<int,bool> vis){
        
        vis[src] = true;
        tin[src] =  timer;
        low[src] = timer;
        timer++;

        for(auto nbr : adjList[src]){
            if(nbr == parent){
                continue;
            }
            if(!vis[nbr]){
                // dfs call
                findBridges(nbr,src, timer, tin, low, vis);
                // low update
                low[src] = min(low[src], low[nbr]);
                // check for bridge
                if(low[nbr] > tin[src]){
                    cout<<nbr<<"--"<<src <<" is a bridge"<<endl;
                }
            }
            else{
                // node is visited and not a parent
                // low update
                low[src] = min(low[src], low[nbr]);
            }
        }
    }

};

int main(){
    Graph g;
    // g.addEdge(0,1,0);
    // g.addEdge(0,2,0);
    // g.addEdge(2,1,0);
    // g.addEdge(0,3,0);
    // g.addEdge(3,4,0);

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);

    int n=5;
    int timer = 0;
    vector<int> tin(n);
    vector<int> low(n);
    unordered_map<int, bool> vis;

    g.findBridges(0,-1,timer, tin, low, vis);
  

    return 0;
}