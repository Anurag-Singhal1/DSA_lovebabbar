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
   
    void bellmanFordAlgo(int n, int src){
        vector<int> dist(n,INT_MAX);           // assuming directed weighted graph
        dist[src] = 0;

        // n-1 times relaxation
        for(int i=0;i<n-1;i++){                    // same process n-1 times repeat krdiya bs
            for(auto t : adjList){                // for all edges
                for(auto nbr : t.second){
                    int u = t.first;
                    int v = nbr.first;
                    int wt = nbr.second;                                   // {nbr is (v,wt)}
                    if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
                        dist[v] = dist[u] + wt;
                    }
                }
            }
        }

        // to check for -ve cycle : 1 baar aur chala do bs
        bool negativeCycle = false;
        for(auto t : adjList){                // for all edges
            for(auto nbr : t.second){
                int u = t.first;
                int v = nbr.first;
                int wt = nbr.second;                                   // {nbr is (v,wt)}
                if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
                    negativeCycle = true;
                    break;
                }
            }
        }
        if(negativeCycle){
            cout<<"Negative cycle also present "<<endl;
        }else{
            cout<<"no -ve cycle present "<<endl;
        }

        cout<<"Printing the distance array : ";
        for(auto i: dist){
            cout<<i<<" ";
        }cout<<endl;
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,-1,1);                     // {u,v,weight, 1 shows directed graph}
    g.addEdge(0,2,4,1);
    g.addEdge(1,2,3,1);

    g.addEdge(1,3,2,1);
    g.addEdge(1,4,2,1);
    g.addEdge(3,1,1,1);

    g.addEdge(3,2,5,1);
    g.addEdge(4,3,-3,1);
      

    g.printAdjList();

    g.bellmanFordAlgo(5,0);             // 5 nodes - 0,1,2,3,4    and  src node is 0  

    return 0;
}