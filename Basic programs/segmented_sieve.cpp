#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
#include<cmath>
using namespace std;

vector<bool> Sieve(int n){
    vector<bool> sieve(n+1,true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=n;i++){
        if(sieve[i]){
            int j=i*i;
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

vector<bool> segSieve(int l, int r){
    // get me prime array, i will use it to mark segmented sieve
    vector<bool> sieve = Sieve(sqrt(r));
    vector<int> basePrimes ;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }
    vector<bool> segSieve(r-l+1,true);   // bool is also considered as 0/1 int value...
    if(l==1 || l==0){
        segSieve[l] = false;
    }
    for(auto prime : basePrimes){
        int first_mul = (l/prime)*prime;
        if(first_mul<l){
            first_mul += prime;
        }
        int j = max(first_mul,prime*prime);
        while(j<=r){
            segSieve[j-l]= false;    // 111-110=1
            j+=prime;
        }
    }
    return segSieve;
}

int main(){

    int l =110;
    int r =130;
    vector<bool> ss = segSieve(l,r);
    for(int i=0;i<ss.size();i++){
        if(ss[i]){
            cout<<i+l<<" ";
        }
    }

    return 0;
}