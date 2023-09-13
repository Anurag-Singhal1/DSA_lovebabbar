#include<bits/stdc++.h>
#include<iostream>
using namespace std;

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
    void dfs(int src, unordered_map<int, bool> &visited2){     // by recursion
        cout<< src <<", ";
        visited2[src] = true;

        for(auto neighbour : adjList[src] ){      // adjList[src] are neighbours of src i.e,   list<int>  
            if(!visited2[neighbour]){            // like 1,2,3 are neighbour of 0, then ab inko check kro idhar
                dfs(neighbour,visited2);         
            }
        }
    }
    // using bfs algo we will check cyclic nature  : undirected graph 
    bool checkCyclicUsingBfs(int src, unordered_map<int,bool> &visited){   
        queue<int> q;
        unordered_map<int,int> parent;

        q.push(src);
        visited[src] = true;
        parent[src] = -1;                  // first node ka parent nhi pata, so -1

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr : adjList[frontNode]){                // nbr is neighbours
                if(!visited[nbr]){
                    q.push(nbr);                           // push all neighbours of frontNode into queue
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                }else{                                          // already visited
                    if(nbr != parent[frontNode]){              // element visited ho and parent bhi na ho
                        return true;                            // cycle is present 
                    }
                }
            }            
        }
        return false; 
    }
    // using dfs algo we will check cyclic nature  : undirected graph 
    bool checkCyclicUsingDfs(int src, unordered_map<int,bool> &visited, int parent){   
        visited[src] = true;

        for(auto nbr: adjList[src]){
            if(!visited[nbr]){                                                  // if not visited 
                bool checkAageKaAns = checkCyclicUsingDfs(nbr,visited,src);           // by recursion 
                if(checkAageKaAns == true){  
                    return true;
                }
            }else{
                if(nbr!=parent){                               // if visited and not parent node, cycle present
                    return true;
                }
            }
        }
        return false;
    }
    // directed graph : dfs algo
    bool checkCyclicDirectedGraphUsingDfs(int src, unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsVisited){
        visited[src] = true;
        dfsVisited[src] = true;

        for(auto nbr : adjList[src]){
            if(!visited[nbr]){
                bool aageKaAnswer = checkCyclicDirectedGraphUsingDfs(nbr,visited, dfsVisited);
                if(aageKaAnswer == true){
                    return true;
                }
            }
            if(visited[nbr]==true && dfsVisited[nbr]==true){    // else lagake uske andar if bhi daal skte
                return true;
            }
        }
        dfsVisited[src] = false;                  // pop from recursive call stack 
        return false;
    }
};


int main(){
    
    Graph g;
    int n=5;          // n is no of nodes in graph, here 8 : 0,1,2,3,4

    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(2,3,0);
    // g.addEdge(3,4,0);
    // g.addEdge(4,0,0);

    g.addEdge(0,1,1);                      // for directed graph
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);
    g.addEdge(4,0,1);
    
    g.printAdjacencyList();
    cout<<endl;

    bool ans = false;
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans = g.checkCyclicDirectedGraphUsingDfs(i,visited, dfsVisited);
            if(ans==true){
                break;
            }
        }
    }
    if(ans==true){
        cout<<"Cycle is present "<<endl;
    }else{
        cout<<"Cycle Absent "<<endl;
    }

    // bool ans = false;                                     // bfs undirected graph algo
    // unordered_map<int,bool> visited;
    // for(int i=0;i<n;i++){
    //     if(!visited[i]){
    //         ans = g.checkCyclicUsingBfs(i,visited);
    //         if(ans==true){                           // means cycle is present 
    //             break;
    //         }
    //     }
    // }
    // if(ans==true){
    //     cout<<"Cycle is present "<<endl;
    // }else{
    //     cout<<"Cycle Absent "<<endl;
    // }

    // bool ansDfs = false;                                        // undirected : dfs algo
    // unordered_map<int,bool> visitedDfs;
    // for(int i=0;i<n;i++){
    //     if(!visitedDfs[i]){
    //         ansDfs = g.checkCyclicUsingDfs(i,visitedDfs, -1);           // -1 is parent of 1st node
    //         if(ansDfs==true){                           // means cycle is present 
    //             break;
    //         }
    //     }
    // }
    // if(ansDfs==true){
    //     cout<<"Cycle is present "<<endl;
    // }else{
    //     cout<<"Cycle Absent "<<endl;
    // }

    return 0;
}       