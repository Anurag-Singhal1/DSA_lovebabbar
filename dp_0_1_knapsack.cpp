#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//Statement: Given a set of n items numbered from 1 up to n, each with a weight wi and a value vi, along with 
//a maximum weight capacity W, maximize the sum of the values of the items in the knapsack so that the sum of 
//the weights is less than or equal to the knapsack's capacity.

// include-exclude pattern solution
// index - index of last element 
//2_d dp
int solveUsingRecursion(int weight[], int value[], int index, int capacity){
    // base case -> only 1 item
    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }else{
            return 0;                   // weight[0] is more than capacity, tb nhi aa paayega na so 0.
        }
    }
    // include  case
    int include = 0 ;
    if(weight[index]<=capacity){
        include = value[index] + solveUsingRecursion(weight,value, index-1,capacity-weight[index]); //2 parameter changes hence, 2-d dp
    }
    int exclude = solveUsingRecursion(weight,value, index-1,capacity);

    int ans = max(include,exclude);
    return ans;
}

int solveUsingMem(int weight[], int value[], int index, int capacity, vector<vector<int> > &dp){
    // base case -> only 1 item
    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }else{
            return 0;                   // weight[0] is more than capacity, tb nhi aa paayega na so 0.
        }
    }
    if(dp[index][capacity]!=-1){
        return dp[index][capacity];
    }

    int include = 0 ;                           // include and exclude
    if(weight[index]<=capacity){
        include = value[index] + solveUsingMem(weight,value, index-1,capacity-weight[index],dp); //2 parameter changes hence, 2-d dp
    }
    int exclude = solveUsingMem(weight,value, index-1,capacity,dp);

    dp[index][capacity]= max(include,exclude);
    return dp[index][capacity];                                                  
}

int main(){
    int weight[] = {4,5,1};
    int value[] = {1,2,6};
    int n=3;
    int capacity = 4;

    // int ans = solveUsingRecursion(weight, value, n-1 , capacity);      // n-1 bcz shows last index of array

    vector<vector<int> > dp(n, vector<int> (capacity+1, -1));    //n+1, capacity+10, chalega bs kam nhi krna hai 
    int ans = solveUsingMem(weight, value, n-1 , capacity,dp);
    cout<<"Answer is : "<<ans<<endl;

    return 0;
}