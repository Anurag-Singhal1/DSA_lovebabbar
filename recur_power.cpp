#include<bits/stdc++.h>        // for using functions like strlen()
using namespace std;

// nth power of a number 
int powerOfN(int x,int y){  // O(y)
    // base case
    if(y==1){
        return x;   // bs ye 1 case hi sambhalna hai, baaki recursion khud krlega
    }
    int ans = x* powerOfN(x,y-1);
    return ans;
}
// optimised approach..takes less time log(y)
int powerOf(int x,int y){
    //  base case
    if(y==1){
        return x;
    }
    int a = powerOf(x,y>>1);
    if(y%2==0){
        return a*a;
    }
    else{
        return a*a*x;
    }
}

int main(){
    // cout<<powerOfN(2,10);
    cout<<powerOf(2,10);
    return 0;
}