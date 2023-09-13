#include<bits/stdc++.h>      
using namespace std;

// to find the factorial of a number
int factorial(int n){
    if(n==1){   // base case 
        return 1;
    }
    int ans = n*factorial(n-1);    // recursive relation
    return ans;
}

int main(){

    cout<<factorial(4);
    return 0;
}