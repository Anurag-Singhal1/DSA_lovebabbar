#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 14;

    vector<int> v;

    while(n){
        int rem = n%2;
        v.push_back(rem);
        n/=2;
    }
    int x = v.size()-1;
    for(int i=x;i>=0;i--){
        cout<<v[i];
    }

    return 0;
}