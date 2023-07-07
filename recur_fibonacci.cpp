#include<bits/stdc++.h>        // for using functions like strlen()
using namespace std;

// to get the nth term of the fibonacci series: 0,1,1,2,3,5,8,13......
int fib(int n){
    // BASE CASE
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans;
}

int main(){
    cout<<fib(6)<<endl;   // to get the nth value of fibonacci series: 
    return 0;
}