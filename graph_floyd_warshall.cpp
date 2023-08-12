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
    void floydWarshal(int n){
        vector<vector<int> > dist(n, vector<int> (n, 1e9)); // INT_MAX ki jgah koi bhi badi value rkhlo
        // mark diagonal elements as 0
        for(int i=0;i<n;i++){ 
            dist[i][i]=0;                                // khud se khud ki distance is 0
        }
        // graph ke andar distance insert krdiya haii
        for(auto t : adjList){
            for(auto nbr : t.second){
                int u = t.first;
                int v = nbr.first;
                int wt = nbr.second;
                dist[u][v] = wt;
            }
        }
        for(int helper=0; helper<n; helper++){            // our logic 
            for(int src=0; src<n; src++){
                for(int dest=0; dest<n; dest++){
                    dist[src][dest] = min(dist[src][dest], dist[src][helper] + dist[helper][dest]);
                }
            }
        }
        cout<<"Printing the distance array : "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<dist[i][j]<<", ";
            }cout<<endl;
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,3,1);                     // {u,v,weight, 1 shows directed graph}
    g.addEdge(0,3,5,1);
    g.addEdge(1,0,2,1);
    g.addEdge(1,3,4,1);
    g.addEdge(2,1,1,1);
    g.addEdge(3,2,2,1);
      

    g.printAdjList(); 

    g.floydWarshal(4);           // if 4 nodes, then wo 0,1,2,3 hi hogi and not 1,2,3,4 (wahi 0 based indexing)

    return 0;
}