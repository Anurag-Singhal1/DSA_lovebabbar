#include<bits/stdc++.h>      
using namespace std;

void lastOccLTR(string &s,char &x,int i, int& ans){
    // base case
    if(i>=s.size()){
        return;
    }
    // ek case khud solve krna haii
    if(s[i]==x){
        ans = i;
    }
    lastOccLTR(s,x,i+1,ans);
}
int lastOccRTL(string &s,char &x,int i){
    // base case
    if(i<0){
        return -1;
    }
    // ek case khud solve krna haii
    if(s[i]==x){
        return i;
    }
    return lastOccRTL(s,x,i-1);
}

int main(){
    string s;
    // char s[];
    cin>>s;

    char x;
    cin>>x;
    // int ans = -1;
    // lastOccLTR(s,x,0,ans);
    cout<<lastOccRTL(s,x,s.size()-1)<<endl;
    // cout<<strrchr(s,x)<<endl;   // it needs both in char type, char s[] and char x...

    return 0;
}