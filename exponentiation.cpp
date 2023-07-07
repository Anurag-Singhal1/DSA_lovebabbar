#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

int slowExpo(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}
int fastExpo(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){      // if b is odd no
            ans*=a;
        }
        a*=a;
        b>>=1;  // b=b/2
    }
    return ans;
}

int main(){  
    // cout<<slowExpo(4,5)<<endl;
    cout<<fastExpo(3,5)<<endl;

    return 0;
}