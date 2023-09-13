#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//cycle detection in directed graph using BFS and topo sort by using bfs(queue) and dfs (stack)
class Graph{
    public:
    unordered_map<int,list<int> > adjList;       // we can use anything list or vector

    void addEdge(int u, int v,  bool direction){
        adjList[u].push_back(v);            // either directed or undirected, u se v to dono mein hi banegi
        if(direction==0){
            adjList[v].push_back(u);          
        }
    }
    void printAdjacencyList(){                  // i represents to whole this    <int,list<int> > 
        for(auto i: adjList){      
            cout<<i.first<<" -> ";
            for(auto j : i.second){          
                cout<<j<<", ";        
            }
            cout<<endl;
        }
    }
    void bfs(int src, unordered_map<int, bool> &visited){      // by queue

        queue<int> q;                            
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout<< frontNode <<", ";

            for(auto neighbour : adjList[frontNode]){     //neighbour indicates to frontnode ke neighbours 
                if(!visited[neighbour]){          //if false then only enter- neighbour visited nhi hone chahiye
                    q.push(neighbour);
                    visited[neighbour] = true;           // node ko insert/visited krte hi true mark    
                }
            }
        }
    }
    void dfs(int src, unordered_map<int, bool> &visited){     // by recursion
        cout<< src <<", ";
        visited[src] = true;

        for(auto neighbour : adjList[src] ){      // adjList[src] are neighbours of src i.e,   list<int>  
            if(!visited[neighbour]){            // like 1,2,3 are neighbour of 0, then ab inko check kro idhar
                dfs(neighbour,visited);         
            }
        }
    }

    // topological sort using dfs
    void topoSortDfs(int src, unordered_map<int, bool> &visited, stack<int> &ans){                         
        
        visited[src] = true;

        for(auto neighbour : adjList[src] ){      // adjList[src] are neighbours of src i.e,   list<int>  
            if(!visited[neighbour]){            // like 1,2,3 are neighbour of 0, then ab inko check kro idhar
                topoSortDfs(neighbour,visited,ans);         
            }
        }
        // while returning store the node in stack
        ans.push(src);
    }
    // topological sort by using bfs (kahn's algorithm)  also cycle detection in directed graph using BFS
    void topoSortBfs(int n, vector<int> &ans){
        queue<int> q;
        unordered_map<int,int> indegree;

        // calculate indegree for whole graph nodes
        for(auto i: adjList){                      // i represents to whole this    <int,list<int> > 
            for(auto nbr:i.second){               // here directed graph 
                indegree[nbr]++; 
            }
        }
        // put all nodes inside q with indegree==0
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        // bfs logic
        while(!q.empty()){
            int fNode = q.front();
            q.pop();

            // ans will be filled with elements from less dependency to higher order
            ans.push_back(fNode);
            // or we can do count++, and count is passed by reference. to calculate len of topo sort order

            for(auto nbr : adjList[fNode]){
                indegree[nbr]--;
                // check for 0 again
                if(indegree[nbr]==0){
                    q.push(nbr);        //q mein less dependency wale daalte rho, baad mein ans mein daal denge
                }
            }
        }
    }
};


int main(){
    
    Graph g;
    int n = 8 ;         
 

    // g.addEdge(2,4,1);                      // for directed graph
    // g.addEdge(2,5,1);
    // g.addEdge(4,6,1);
    // g.addEdge(5,3,1);
    // g.addEdge(3,7,1);
    // g.addEdge(6,7,1);
    // g.addEdge(7,0,1);
    // g.addEdge(7,1,1);

    g.addEdge(0,1,1);                   // to detect cycle
    g.addEdge(1,2,1);                  
    g.addEdge(2,3,1);                  
    g.addEdge(3,1,1);                  
    
    g.printAdjacencyList();
    cout<<endl;

    vector<int> ans2;                                    // topo sort by bfs by queue
    g.topoSortBfs(n,ans2);                               // connected or disconnected both 

    if(ans2.size()==n){
        cout<<"It is a valid topological Sort "<<endl;
    }else{
        cout<<"Cycle present or invalid topo sort "<<endl;
    }

    cout<<"Printing the topological sort by using bfs : "<<endl;
    for(auto i : ans2){
        cout<<i<<" ";
    }cout<<endl;


    // topo sort by dfs by help of stack
    // unordered_map<int, bool> visited;
    // stack<int> ans;                       
    // for(int i=0;i<n;i++){
    //     if(!visited[i]){
    //         g.topoSortDfs(i,visited,ans);            // here we make a call 
    //     }
    // }

    // cout<<"Topological sort by using dfs : "<<endl;                  // printing the stack
    // while(!ans.empty()){
    //     cout<<ans.top()<<" ";
    //     ans.pop();
    // }cout<<endl;

    return 0;
}       