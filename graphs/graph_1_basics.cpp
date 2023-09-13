#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// adjacency matrix
int main(){
    int n;
    cout<<"Enter the number of nodes : " ;
    cin>>n;

    //This part initializes the 2D vector with n rows and n columns, and sets all the elements to 0. 
    vector<vector<int> > adj(n,vector<int>(n,0));    

    int e;
    cout<<"Enter the number of edges : ";
    cin>>e;

    for(int i=0;i<e;i++){
        int u,v;
        cin>> u>>v;
        adj[u][v] = 1;     // mark as 1 , or 1 ki jgah bs weight laga dena whenever available   
    }

    // printing 
    cout<<"Printing the matrx : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}