#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// 1-d DP
// paint fence algorithm : gfg 
// here we cant paint 3 consecutive fences with the same color : use formula for this algorithm question
// formula :    f(n) = ( f(n-1) + f(n-2) )*k-1
int solveUsingRecursion(int n ,int k){
    if(n==1){                                  // base cases
        return k;
    }
    if(n==2){
        return (k + k*(k-1));                  // for k=4 colors, it gives 16
    }
    int ans = (solveUsingRecursion(n-1,k) + solveUsingRecursion(n-2,k))*(k-1);
    return ans;
}
int solveUsingMemo(int n ,int k, vector<int> &dp){
    if(n==1){                                  // base cases
        return k;
    }
    if(n==2){
        return (k + k*(k-1));                  // for k=4 colors, it gives 16
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = (solveUsingMemo(n-1,k,dp) + solveUsingMemo(n-2,k,dp))*(k-1);
    return dp[n];
}

int solveUsingTab(int n ,int k){
    vector<int> dp(n+1,-1);            // step 1 : initialise the array 
    dp[1]=k;
    dp[2]= k + k*(k-1);

    for(int i=3;i<=n;i++){
        dp[i] = (dp[i-1] + dp[i-2])*(k-1);
    }
    return dp[n];
}

int solveUsingSo(int n ,int k){
    int prev2 = k;
    int prev1 = k + k*(k-1);

    for(int i=3;i<=n;i++){
        int curr = (prev2 + prev1)*(k-1);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1 ;
}

int main(){ 
    int n=4;              // here n is no of fences to be paint
    int k=3;              // k is the no of colors

    // int ans = solveUsingRecursion(n,k);

    // vector<int> dp(n+1,-1);
    // int ans = solveUsingMemo(n,k,dp);                       // by dp
    // cout<<"Ans : "<<ans<<endl;                           // it gives 66 as answer
    
    // int ans = solveUsingTab(n,k);
    // cout<<"Ans : "<<ans<<endl;

    int ans = solveUsingSo(n,k);                     // space optimisation
    cout<<"Ans : "<<ans<<endl;
       
    return 0;
}