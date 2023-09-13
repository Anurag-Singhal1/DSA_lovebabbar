#include<bits/stdc++.h>
#include<iostream>
using namespace std;             

class Graph{
    public:
    unordered_map<int,list<int> > adjList;       // we can use anything list or vector

    void addEdge(int u, int v, bool direction){
        adjList[u].push_back(v);            // either directed or undirected, u se v to dono mein hi banegi
        if(direction==0){
            adjList[v].push_back(u);          
        }
    }
    void printAdjacencyList(){   // i represents to whole this    <int,list<pair<int,int> > >
        for(auto i: adjList){      
            cout<<i.first<<" -> ";
            for(auto j : i.second){          
                cout<<j<<", ";        // j.first and j.second is v and weights resp.
            }
            cout<<endl;
        }
    }
    void bfs(int src, unordered_map<int, bool> &visited){      //by queue, unordered map is for visited nodes

        queue<int> q;                                // inserting all indexes inside queue
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout<< frontNode <<", ";

            // insert nbr (neighbour)
            for(auto nbr : adjList[frontNode]){     //nbr indicates to frontnode ke neighbours  
                if(!visited[nbr]){         // if false then only enter- nbr visited nhi hone chahiye
                    q.push(nbr);
                    visited[nbr] = true;           // node ko insert/visited krte hi true mark    
                }
            }
        }
    }
    void dfs(int src, unordered_map<int, bool> &visited2){     // by recursion
        cout<< src <<", ";
        visited2[src] = true;

        for(auto nbr : adjList[src] ){      // adjList[src] are nbrs of src i.e,   list<int>  
            if(!visited2[nbr]){            // like 1,2,3 are nbr of 0, then ab inko check kro idhar
                dfs(nbr,visited2);         
            }
        }
    }
};

int main(){
    Graph g;
    int n=5;          // n is no of nodes in graph, here 5 : 0,1,2,3,4

    g.addEdge(0,1,0);
    g.addEdge(1,3,0);
    g.addEdge(0,2,0);
    g.addEdge(2,4,0);
    
    g.printAdjacencyList();

    // for lop - to also manage disconnected graph, gud practice, so use it whether graph is connected or not.
    cout<<endl<<"Printing BFS traversal : "<<endl;
    unordered_map<int, bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.bfs(i, visited);             // har node ko source( starting vertex of graph) maanke call krenge
        }
    }

    cout<<endl<<"Printing DFS traversal : "<<endl;
    unordered_map<int, bool> visited2;
    for(int i=0;i<n;i++){
        if(!visited2[i]){
            g.dfs(i, visited2);                          // g.dfs( )        
        }
    }

    return 0;
}