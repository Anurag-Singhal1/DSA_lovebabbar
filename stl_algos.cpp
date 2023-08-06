#include<bits/stdc++.h>
#include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<stack>
// #include<vector>
// #include<limits.h>                           // to include INT_MAX  and INT_MIN   
#include<set>
#include<algorithm>                      // to make use of stl algos : reverse fucntion (vector)
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    // binary search
    cout<<binary_search(v.begin(), v.end(), 5)<<endl;             // true/false

    cout<<"lower bound : "<<lower_bound(v.begin(), v.end(),4)-v.begin()<<endl; // returns index of >=val
    cout<<"upper bound : "<<upper_bound(v.begin(), v.end(),4)-v.begin()<<endl; // returns index of >val

    // min, max, swap
    int a =5;
    int b= 6;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<"\n";

    // reverse
    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    // rotating an array
    rotate(v.begin(),v.begin()+2, v.end());       // shuru ke 2 element rotate hoke last mein pahuch jaayenge
    cout<<"After rotate : ";
    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;

    // sort
    vector<int> x;
    x.push_back(5);
    x.push_back(2);
    x.push_back(-4);
    x.push_back(1);

    sort(x.begin(),x.end());
    for(auto i:x){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}