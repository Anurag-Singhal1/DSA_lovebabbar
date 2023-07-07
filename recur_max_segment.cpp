#include<bits/stdc++.h>      
using namespace std;

int solve(vector<int> &arr, int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    // solve 1 case
    int maxi = INT_MIN;
    for(int i=0;i<arr.size();i++){
        int ans = solve(arr,n-arr[i]);
        if(ans!=INT_MIN){
            maxi = max(maxi,ans+1);
        }
    }
    return maxi;
}

int main(){

    // vector<int> v{5,2,2};
    vector<int> v{2,3,5};
    // int n=7;
    int n=11;        // 2,2,2,2,3 - total 5
    cout<<max(solve(v,n),0);   // it is just to handle INT_MIN case...

    return 0;
}