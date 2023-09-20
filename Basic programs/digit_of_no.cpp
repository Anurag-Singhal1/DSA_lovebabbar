#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=1234567890;
    
    vector<int> v;
    while(n){
        int rem = n%10;
        n/=10;
        v.push_back(rem);
    }
    int x = v.size()-1;
    // int i=0;
    // int j= x-1;
    // for(int k=0;k<=x/2;k++){
    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    // for(auto i:v){
    //     cout<<i<<" ";
    // }cout<<endl;

    for(int i=x;i>=0;i--){
        cout<<v[i]<<" ";
    }

    return 0;
}