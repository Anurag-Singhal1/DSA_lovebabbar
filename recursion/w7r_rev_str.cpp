#include<bits/stdc++.h>      
using namespace std;

void reverseString(string &s,int st,int e){
    // base case
    if(st>=e){
        return;
    }
    // 1 case solve krna haii...
    swap(s[st],s[e]);
    reverseString(s,st+1,e-1);
}

int main(){

    string s = "abcde";
    int st = 0;
    int e = s.size()-1;
    reverseString(s,st,e);
    cout<<s<<endl;
    return 0;
}