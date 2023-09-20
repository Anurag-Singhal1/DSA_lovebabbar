#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 7;
    int ans=0;

    while(n){
        if(n&1){
            ans++;
        }    
        n=n>>1;
    }
    cout<<"No of set bits in given number are : "<<ans<<endl;


    return 0;
}