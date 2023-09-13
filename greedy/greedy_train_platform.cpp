#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// here, we have to tell that how many no of trains can pass through the platform by using greedy approach

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second ;                 // increasing departure time ke according sort krdo
}

int solve(int n, int arr[], int dep[]){
    vector<pair<int,int> > data;

    for(int i=0;i<n;i++){
        data.push_back({arr[i],dep[i]});
    }
    sort(data.begin(), data.end(), cmp);               // custom comparator

    int count = 1;
    int lastdep = data[0].second;
    cout<<data[0].first <<" - "<<data[0].second <<endl;

    for(int i=1;i<n;i++){
        if(data[i].first >= lastdep){
            count++;
            lastdep = data[i].second;
            cout<<data[i].first <<" - "<<data[i].second <<endl;
        }
    }
    return count;
}

int main(){

    int n=4;
    int arr[] = {5,8,2,4};          // arrival time
    int dep[] = {7,11,6,5};        // departure time

    int ans = solve(n,arr,dep);
    cout<<"Ans is : "<<ans<<endl;

    return 0;
}