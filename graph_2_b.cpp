#include<bits/stdc++.h>
#include<iostream>
using namespace std;
template<typename T>                       // ye upar namespace se neeche hi aayega hamesha  
// int ki jgah T krna hai bs in graph

// if we want char like a,b,c in place of integers, so we make it a generic graph
class Graph{
    public:
    unordered_map<T,list<T> > adjList;       // we can use anything list or vector

    void addEdge(T u, T v,  bool direction){
    
        adjList[u].push_back(v);            // either directed or undirected, u se v to dono mein hi banegi
        if(direction==0){
            // create an edge form v to u
            adjList[v].push_back(u);          // make_pair ki jgah {} use krliya hai 
        }
    }
    void printAdjacencyList(){   // i represents to whole this    <int,list<pair<int,int> > >
        for(auto i: adjList){      // i or node ,    i.first is int 
            cout<<i.first<<" -> ";
            for(auto j : i.second){           // j as neighbour and i.second means list
                cout<<j<<", ";        // j.first and j.second is v and weights resp.
            }
            cout<<endl;
        }
    }
};


int main(){
    
    Graph<char> g;                    // hume bs idhar int, char insert krna hai, jis bhi type ka graph hai
    g.addEdge('a','b',0);
    g.addEdge('b','c',0);
    g.addEdge('a','c',0);

    g.printAdjacencyList();
    

    return 0;
}