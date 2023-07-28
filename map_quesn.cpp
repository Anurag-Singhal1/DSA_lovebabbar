#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
using namespace std;

// to check if a linked lsit is circular or not
bool checkCircular(Node* head){
    unordered_map<node*,bool> vis;
    Node* temp = head;

    while(temp!=NULL){
        if(vis.find(temp)!=vis.end()){     // means temp pehle se nhi hai andar
            vis[temp] = true;
        }
        else{
            return true;           // ki haa temp pehle se hai, means loop present, idahr return hi krdiya hai
        }
        temp = temp-> next;
    }
    return false;                   // if all the entries are only 1 time, then no circular linked list
}

// to find the freq of each char in a string
void freq(string str){
    unordered_map<char,int> mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;                   // by default sbki freq 0 hoti hai...
    }
    for(auto i:mp){
        cout<<i.first <<" -> "<<i.second<<endl;
    }
}

int main(){
    string str;
    cout<<"Input ur string : ";
    cin>>str;

    freq(str);

    return 0;
}