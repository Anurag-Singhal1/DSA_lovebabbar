#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// jaise binary tree mein to sirf 2 child the, left and right, idhar 26 child hai, islye array liya hai
class TrieNode{
    public:

    char data;
    TrieNode* children[26];            // total 26 alphabets, so size 26 (a-0), (b-1)....(z-25)
    bool isTerminal;                   // children array ki jgah map bhi le skte the.

    TrieNode(char d){
        this->data = d;
        for(int i=0;i<26;i++){
            this->children[i] = NULL;
        }
        // children = new TrieNode(26);
        this->isTerminal = false;
    }
};

void insertWord(TrieNode* root, string word){
    // cout<<"Inserting "<<word<<endl;                      // jsut for visualising

    if(word.length()==0){                                       // base case
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;                            // declaration of child object

    // inserting 
    if(root->children[index]!=NULL){            // if already a char is present at that index
        child = root->children[index];          // this children is like prev and next in linked list
    }
    else{           
        child = new TrieNode(ch);               // not present, so create a node
        root->children[index] = child;          //children[index] returns the char at that index like arr[0]=1
    }                                           // ab children[index] iss child ko mark kr raha haii

    // rest recursion will handle
    insertWord(child,word.substr(1));       // 1st char ko chorke baaki saari string bhej do
}

void storeSuggestions(TrieNode* curr,vector<string> &temp,string &prefix){
    if(curr -> isTerminal){
        temp.push_back(prefix);
    }
    // a to z tk choices dedo
    for(char ch='a';ch<='z';ch++){
        int index = ch - 'a';
        TrieNode* next = curr->children[index];

        if(next!=NULL){
            // if child exists
            prefix.push_back(ch);
            storeSuggestions(next,temp,prefix);
            prefix.pop_back();
        }
    }
}

vector<vector<string> > getSuggestions(TrieNode* root ,string input){
    
    TrieNode* prev = root;
    vector<vector<string> > output;
    string prefix = "";

    for(int i=0;i<input.size();i++){
        char lastch = input[i];

        int index = lastch - 'a';
        TrieNode* curr = prev->children[index];

        if(curr==NULL){
            break;
        }
        else{
            // iske andar mein saare suggestions store krke launga
            vector<string> temp;
            prefix.push_back(lastch);
            storeSuggestions(curr,temp,prefix);
            output.push_back(temp);
            prev = curr;
        }
    }
    return output;
}

int main(){
    vector<string> v;
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("last");
    v.push_back("lost");
    v.push_back("lane");
    v.push_back("lord");

    string input = "lovi";
    TrieNode* root= new TrieNode('-');

    for(int i=0;i<v.size();i++){
        insertWord(root,v[i]);
    }
    vector<vector<string> > ans = getSuggestions(root,input);

    cout<<"Printing the answer : "<<endl;

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){      // pehli string row ko denote
            cout<<ans[i][j]<<", ";
        }cout<<endl;
    }

    return 0;
}