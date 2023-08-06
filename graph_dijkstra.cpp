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
   
    void shortestDistDijkstra(int src, int n){
        vector<int> dist(n, INT_MAX);
        set<pair<int,int> > st;                         // (distance, node)

        dist[src] = 0;
        st.insert({0,src});                        // khud se khud ki distance is 0 <-> make_pair(0,src)

        while(!st.empty()){
            // to fetch the smallest/first element from set  (ascending order na, so smallest in first place)
            auto topElement = *(st.begin()); 
            int nodeDistance = topElement.first;
            int node = topElement.second;

            // pop from set
            st.erase(st.begin());                        // in set we have erase instead of pop

            for(auto nbr : adjList[node]){
                if(nodeDistance + nbr.second < dist[nbr.first]){     // to update distance
                    // finding entry in set
                    auto result = st.find({dist[nbr.first],nbr.first});
                    // if found in set, then remove and update that
                    if(result!=st.end()){
                        st.erase(result);
                    }
                    // now update in distance array and set
                    dist[nbr.first] = nodeDistance + nbr.second;
                    st.insert({dist[nbr.first], nbr.first});
                }
            }
        }
        cout<<"Printing the Ans : "<<endl;
        for(auto i : dist){                            // now jsut print the dist array
            cout<<i<<", ";
        }cout<<endl;
    }
};

int main(){
    Graph g;
    g.addEdge(6,3,2,0);                     // {u,v,weight, 0 shows un-directed graph}
    g.addEdge(6,1,14,0);
    g.addEdge(3,1,9,0);
    g.addEdge(3,2,10,0);
    g.addEdge(1,2,7,0);
    g.addEdge(2,4,15,0);
    g.addEdge(4,3,11,0);
    g.addEdge(6,5,9,0);
    g.addEdge(4,5,6,0);  


    g.printAdjList();
    g.shortestDistDijkstra(6,7);      // 6 as src , 7 is no of nodes (0,1,2,3,4,5,6)

    // dist array mein 6(src node) se sbhi nodes ki shortest distance aa jaayegi  

    return 0;
}