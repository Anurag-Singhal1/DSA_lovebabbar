#include<bits/stdc++.h>      
using namespace std;

// same problem as money from 2,5, 10 rupee notes
// it finds minimum no of ways to get the target value from the given array values
int solve(vector<int> &arr,int target){
    // base case
    if(target==0){
        return 0;  // 0 bnane ke liye kitne element use krne padenege
    }
    if(target<0){
        return INT_MAX ;  // invalid case , so return int_max..mini will handle it in last
    }
    // just solving 1 case here
    int mini=INT_MAX; 
    for(int i=0;i<arr.size();i++){  // array ki sbhi values ko daalke dekhega na ki kisse min values lagegi
        int ans= solve(arr,target-arr[i]);  // 0 se target pe jao ya target se 0 pe aao, ek hi baat hai na..
        if(ans!=INT_MAX){
            mini = min(mini,ans+1);  // +1 bcz 0 se upar bhi to aana hai, 0+1=1, 1+1=2,.......
        }
    }
    return mini;
}

int main(){

    vector<int> v{1,2,3};
    int target = 7;   // 3 elements - 3,3,1
    cout<<solve(v,target);
    return 0;
}