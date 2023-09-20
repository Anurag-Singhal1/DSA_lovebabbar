#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=5;

    for(int i=0;i<n;i++){
        int k=n-i;
        for(int j=0;j<=i;j++){
            char ch = k + 64;
            cout<<ch<<" ";
            k++;
        }cout<<endl;
    }

    return 0;
}