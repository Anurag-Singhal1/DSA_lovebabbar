#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
#include<cmath>
using namespace std;

vector<bool> Sieve(int n){  // n size ki array bn gayi...jo sirf true ya false store karegi....
    vector<bool> sieve(n+1,true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=n;i++){    // optimizaton 2 : i*i<=n in place of i<=n bcz int j=i*i ye extra hi chalta hai baad mein
        if(sieve[i]==true){
            // int j= i*2;    // to initialize the table
            int j=i*i;    // optimization 1 : bcz i^2 se pehle wale sbhi multiples already marked ho chuke honge
            while(j<=n){
                sieve[j] = false;
                j+=i;   // i ka table chala diya
            }
        }
    }
    return sieve;
}

int main(){

    vector<bool> sieve = Sieve(25);  // this will store all prime numbers till 25
    for(int i=0;i<=25;i++){
        if(sieve[i]==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}