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
    // void printAdjList(){
    //     for(auto i : adjList){
    //         cout<<i.first<<"-> ";
    //         for(auto nbr : i.second){
    //             cout<<"("<<nbr.first<<", "<<nbr.second<<"), ";
    //         }cout<<endl;
    //     }
    // }
    
    void dfs1(int src, stack<int> &s, unordered_map<int,bool> &vis){
        vis[src] = true;

        for(auto nbr : adjList[src]){
            if(!vis[nbr]){
                dfs1(nbr, s, vis);
            }
        }
        s.push(src);
    }
    void dfs2(int src, unordered_map<int,bool> &visited, unordered_map<int, list<int> > &adjNew){
        visited[src] = true;
        cout<<src<<", ";

        for(auto nbr : adjNew[src]){
            if(!visited[nbr]){
                dfs2(nbr, visited, adjNew);
            }
        }
    }

    int countSCC(int n){
        stack<int> s;
        unordered_map<int, bool> visited;

        // find toposort ordering
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs1(i,s,visited);
            }
        }

        // reverse all edges            (u se v   ko   v se u krna haii)
        unordered_map<int, list<int> > adjNew;

        for(auto t : adjList){
            for(auto nbr : t.second){
                int u = t.first;
                int v = nbr;
                // v-u insert
                adjNew[v].push_back(u);
            }
        }
        // traverse using dfs
        int count  = 0;
        unordered_map<int, bool> visited2;

        while(!s.empty()){
            int node = s.top();
            s.pop();
            if(!visited2[node]){
                cout<<"Printing "<<count + 1 << " the SCC : ";
                dfs2(node,visited2, adjNew);
                cout<<endl;
                count++;
            }
        }
        return count;
    }

};

int main(){
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,0,1);
    g.addEdge(2,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,4,1);
    g.addEdge(6,7,1);

    int ans = g.countSCC(8);

    cout<<"No of SCC is : "<<ans<<endl;

    return 0;
}