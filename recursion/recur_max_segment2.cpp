#include<bits/stdc++.h>      
using namespace std;

int solve(int n,int x,int y,int z){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int a = solve(n-x,x,y,z)+1;
    int b = solve(n-y,x,y,z)+1;
    int c = solve(n-z,x,y,z)+1;

    return max(a,max(b,c));
}

int main(){

    // int n=8;
    // int x= 3;
    // int y= 3;
    // int z= 3;

    // int n=11;
    // int x= 2;
    // int y= 3;
    // int z= 5;

    int n=7;
    int x= 5;
    int y= 2;
    int z= 2;

    cout<<max(0,solve(n,x,y,z))<<endl;  // INT_min ko hatane ke liye max with 0 kiya hai...
    return 0;
}