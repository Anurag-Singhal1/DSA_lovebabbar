#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void getSubsequences(string &str){
    int n = str.size();
    vector<string> ans;

    for(int num=0; num<(1<<n);num++){          // run 8 times - 0,1,2,3,4,5,6,7
        string temp = "";                          // to create subsequence string in this temp string
        for(int i=0;i<n;i++){
            if(num & (1<<i)){                     // 1<<i gives positions, 0,1,2
                temp.push_back(str[i]);
            }
        }
        ans.push_back(temp);
    }
    cout<<"Count the subsequences : "<<ans.size()<<endl;
    for(auto i : ans){
        cout<<i<<endl;
    }
}

int main(){

    string str = "abc";
    getSubsequences(str);


    return 0;
}