#include<bits/stdc++.h>      
using namespace std;

bool check(string &s, int st, int e){
    if(st>=e){
        return true;
    }
    if(s[st]!=s[e]){
        return false;
    }
    return check(s,st+1,e-1);
}

int main(){

    string s= "khushi";
    bool ans = check(s,0,s.size()-1);
    if(ans){
        cout<<"YES, palindrome. "<<endl;
    }
    else{
        cout<<"NOT, a palindrome. "<<endl;
    }
    return 0;
}