#include<bits/stdc++.h>
#include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<stack>
// #include<vector>
// #include<limits.h>                                      // to include INT_MAX  and INT_MIN   
// #include<algorithm>                                     // to make use of stl reverse fucntion (vector)
using namespace std;

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
    void topoSortDfs(int src, unordered_map<int, bool> &visited, stack<int> &ans){
        visited[src] = true;

        for(auto nbr : adjList[src] ){                        // nbr is list<pair<int,int> >
            if(!visited[nbr.first]){            
                topoSortDfs(nbr.first,visited,ans);         
            }
        }
        ans.push(src);                                       // while returning store the node in stack
    }
    void shortestPathDfs(int dest, stack<int> topoOrder, int n){
        vector<int> dist(n,INT_MAX);                  // all n elements initialised with INT_MAX weight

        int src = topoOrder.top();
        topoOrder.pop();
        dist[src] = 0;                              // khud se khud ki distance 0 hi to hogi

        for(auto nbr : adjList[src]){
            if(dist[src] + nbr.second < dist[nbr.first]){              // if min then only update
                dist[nbr.first] = dist[src] + nbr.second ;            // nbr.second is weight 
            }
        }

        while(!topoOrder.empty()){
            int topElement = topoOrder.top();
            topoOrder.pop();

            if(dist[topElement]!=INT_MAX){                      // bcz, INT_MAX mein to kuch add hi nhi hoga na
                for(auto nbr : adjList[topElement]){
                    if(dist[topElement] + nbr.second < dist[nbr.first]){      // if min then only update
                        dist[nbr.first] = dist[topElement] + nbr.second ;
                    }
                }
            }
        }
        cout<<"Printing the Ans : "<<endl;      // src(here 0) se every node ka shortest distance nikaal dega
        for(int i=0;i<n;i++){
            cout<<i<<" -> "<<dist[i]<<endl;
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,5,1);                     // {u,v,weight, 1 shows directed graph}
    g.addEdge(0,2,3,1);
    g.addEdge(2,1,2,1);
    g.addEdge(1,3,3,1);
    g.addEdge(2,3,5,1);
    g.addEdge(2,4,6,1);
    g.addEdge(4,3,1,1);

    g.printAdjList();

    stack<int> topoOrder;
    unordered_map<int,bool> visited;
    g.topoSortDfs(0,visited,topoOrder);


    g.shortestPathDfs(3, topoOrder,5);              // 5 nodes total 


    return 0;
}