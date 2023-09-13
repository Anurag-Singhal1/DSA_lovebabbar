#include<bits/stdc++.h>       
using namespace std;

int climbStairs(int n){
    // base case
    // if(n==0 || n==1){   // oth stair pe pahuchne ka bhi 1 tarika hai...just jump
    //     return 1;
    // }
    if(n==1 || n==2){   // by my own way.... it is optimised than above...
        return n;
    }
    
    int ans = climbStairs(n-1)+climbStairs(n-2);
    return ans;
}

int main(){
    int n; cin>>n;
    cout<<climbStairs(n);
    return 0;
}