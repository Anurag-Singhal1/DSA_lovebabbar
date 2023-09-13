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

int main(){

    set<int> s;

    s.insert(1);
    s.insert(10);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(9);
    s.insert(9);
    s.insert(9);

    for(auto i: s){
        cout<<i<<" ";             // 1 5 6 7 9 10
    }cout<<endl;

    s.erase(s.begin());     // begin element ka iterator

    for(auto i: s){
        cout<<i<<" ";             
    }cout<<endl;

    set<int> :: iterator it = s.begin();
    it++;                                         // 2 element(at 1 index) gets deleted

    s.erase(it);

    for(auto i: s){
        cout<<i<<" ";             
    }cout<<endl;
    
    // count tells wheter an elemnt is present ot not
    cout<<"10 is present or not : "<<s.count(10)<<endl;                          // 1, means present

    // find, if element finds, then return its iterator
    set<int> :: iterator itr = s.find(7);
    cout<<"Value present at iterator : "<< *itr <<endl;             // 7

    for(auto it=itr;it!=s.end();it++){                      // iterator jaha pe hai, waha se print 
        cout<<*it<<" ";                                // 7 9 10
    }cout<<endl;


    return 0;
}