#include<bits/stdc++.h>
using namespace std;

long long ncr(int n, int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res/=(i+1);
    }
    return res;
}

int main(){
    int n = 6;
    int r = 2;


    cout<<ncr(n,r)<<endl;

    return 0;
}