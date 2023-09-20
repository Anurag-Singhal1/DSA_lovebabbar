#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // vector initialisation
    vector<int> v(3);             // idhar size declare krna padega to take input in vector
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    cout<<"Printing the values : ";
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    // 2 way - by taking input inside for loop    
    vector<int> x;
    for(int i=0;i<3;i++){
        int y;
        cin>>y;
        x.push_back(y);
    }
    cout<<"Printing the values : ";
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;


    vector<int> adjList[5];              // it is an array of vectors

    return 0;
}