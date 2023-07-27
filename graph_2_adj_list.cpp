#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Graph{
    public:
    // unordered_map<int,list<int> > adjList;       // we can use anything list or vector
    unordered_map<int,list<pair<int,int> > > adjList;           // list bcz we have to store all pairs neighbour to that node

    void addEdge(int u, int v,int weight,  bool direction){
        // direction 0 - undirected graph
        // direction 1 - directed graph
        // create an edge form u to v
        adjList[u].push_back({v,weight});            // either directed or undirected, u se v to dono mein hi banegi
        if(direction==0){
            // create an edge form v to u
            adjList[v].push_back({u,weight});          // make_pair ki jgah {} use krliya hai 
        }
    }
    void printAdjacencyList(){   // i represents to whole this    <int,list<pair<int,int> > >
        for(auto i: adjList){      // i or node ,    i.first is int 
            cout<<i.first<<" -> ";
            for(auto j : i.second){           // j as neighbour and i.second means list
                cout<<"("<<j.first<<","<<j.second<<"), ";        // j.first and j.second is v and weights resp.
            }
            cout<<endl;
        }
    }
};


int main(){
    
    Graph g;

    // g.addEdge(0,1,9,0);            // undirected graph, means from both sides
    // g.addEdge(1,2,7,0);
    // g.addEdge(0,2,4,0);
    // cout<<endl;
    // g.printAdjacencyList();


    // g.addEdge(srcNode, destNode, weight, direction);
    g.addEdge(0,1,5,1);            // directed graph
    g.addEdge(1,2,8,1);
    g.addEdge(0,2,6,1);
    cout<<endl;
    g.printAdjacencyList();
    

    return 0;
}