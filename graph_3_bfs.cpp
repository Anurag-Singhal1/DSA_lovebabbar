#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// template<typename T>                   

class Graph{
    public:
    unordered_map<int,list<int> > adjList;       // we can use anything list or vector

    void addEdge(int u, int v,  bool direction){
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
    void bfs(int src, unordered_map<int, bool> &visited){      // by queue
        queue<int> q;                                // queue ke andar bs saare vertex ko insert kr rahe

        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout<< frontNode <<", ";

            // insert neighbour
            for(auto neighbour : adjList[frontNode]){     //neighbour indicates to frontnode ke neighbours 
                if(!visited[neighbour]){                // true nhi, if false then only enter- neighbour visited nhi hone chahiye
                    q.push(neighbour);
                    visited[neighbour] = true;           // node ko insert/visited krte hi true mark    
                }
            }
        }
    }
    void dfs(int src, unordered_map<int, bool> &visited2){     // by recursion
        cout<< src <<", ";
        visited2[src] = true;

        for(auto neighbour : adjList[src] ){      // adjList[src] are neighbours of src i.e,   list<int>  
            if(!visited2[neighbour]){            // like 1,2,3 are neighbour of 0, then ab inko check kro idhar
                dfs(neighbour,visited2);         
            }
        }
    }
};


int main(){
    
    Graph g;
    int n=5;          // n is no of nodes in graph, here 8 : 0,1,2,3,4

    g.addEdge(0,1,0);
    g.addEdge(1,3,0);
    g.addEdge(0,2,0);
    g.addEdge(2,4,0);
    
    g.printAdjacencyList();

    unordered_map<int, bool> visited;
    // run a loop for all nodes - for lop bcz so that we can manage disconnected graph also, but gud practice 
    // so use it whether graph is connected or not.
    cout<<endl<<"Printing BFS traversal : "<<endl;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.bfs(i, visited);             // har node ko source( starting vertex of graph) maanke call krenge
        }
    }
    cout<<endl<<"Printing DFS traversal : "<<endl;
    unordered_map<int, bool> visited2;
    for(int i=0;i<n;i++){
        if(!visited2[i]){
            g.dfs(i, visited2);             // har node ko source( starting vertex of graph) maanke call krenge
        }
    }


    return 0;
}