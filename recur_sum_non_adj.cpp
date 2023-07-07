#include<bits/stdc++.h>      
using namespace std;

void solve(vector<int> &v,int i ,int sum,int &maxi){
    // base case
    if(i>=v.size()){
        // update maxi
        maxi = max(maxi,sum);
        return;
    }
    // include
    solve(v,i+2,sum+v[i],maxi);
    // exclude
    solve(v,i+1,sum,maxi);

}

int main(){

    // vector<int> v{2,1,4,9};   // 9+2=11
    // vector<int> v{1,2,4};   // 1+4=5
    vector<int> v{1,2,3,5,4};   // 1+3+4=8
    int i=0;
    int maxi = INT_MIN;
    int sum = 0;

    solve(v,i,sum,maxi);
    cout<<maxi<<endl;

    return 0;
}