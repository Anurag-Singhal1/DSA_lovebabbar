#include<bits/stdc++.h>      
using namespace std;

bool findKey(string& str,int i, int& n,char& key){ // except i we can send all other by reference...
    // base case
    if(i>=n){
        return false;  // means key not found..qki milte hi main function mein return kr dega...
    }
    if(str[i]==key){  // just solve 1 case
        return true;
    }
    return findKey(str,i+1,n,key);   // baaki recursion sambhal lega..
}

// to return the index of the key
int Key(string& str,int i, int& n,char& key){ 
    // base case
    if(i>=n){
        return -1;  
    }
    if(str[i]==key){  
        return i;
    }
    return Key(str,i+1,n,key);   
}

// to print all the indexes of given key
void allKey(string& str,int i, int& n,char& key){ 
    // base case
    if(i>=n){
        return ;  
    }
    if(str[i]==key){  
        cout<<"Found at "<<i<<endl;
    }
    allKey(str,i+1,n,key);   
}

// to store all indexes of the key in a vector....
void storeKey(string& str,int i, int& n,char& key, vector<int>& ans){   // vector<int> ans pass by reference..
    // base case
    if(i>=n){
        return ;  
    }
    if(str[i]==key){  
        ans.push_back(i);
    }
    storeKey(str,i+1,n,key,ans);   
}

int main(){

    string str = "Anuragrgr";
    char key = 'r';
    int n = str.length();
    int i=0;
    vector<int> ans;

    cout<<findKey(str,i,n,key)<<endl;  // return true/false
    cout<<Key(str,i,n,key)<<endl;      // return index of the key found
    allKey(str,i,n,key);      // return all indexes of given key
    storeKey(str,i,n,key,ans);      // return all indexes of given key

    for(auto val: ans){
        cout<<val<<" ";
    }cout<<endl;
    cout<<"Count of the key element is : "<<ans.size()<<endl; // we can also pass count variable in the func instead of vector by initialising count variable here

    return 0;
}