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

// now searching a word 
bool searchWord(TrieNode* root, string word){
    if(word.length()==0){                                     // base case
        return root->isTerminal;             // if that last word is terminal(end of word), then return true
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    if(root->children[index]!=NULL){
        child = root->children[index];
    }else{
        return false;
    }
    // by recursion
    return searchWord(child, word.substr(1));
}

// delete a word
void deleteWord(TrieNode* root, string word){
    if(word.length()==0){                                     // base case
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    child = root->children[index];        // word jb delete krna hai, to obv present to hai hi,bs assign krdiya
    
    // by recursion
    deleteWord(child, word.substr(1));
}

int main(){

    TrieNode* root = new TrieNode('-');            // null node 

    insertWord(root,"coding");
    insertWord(root,"code");
    insertWord(root,"coder");
    insertWord(root,"codehelp");
    insertWord(root,"baba");
    insertWord(root,"baby");
    insertWord(root,"babu");

    if(searchWord(root,"code")){
        cout<<"Present "<<endl;
    }else{
        cout<<"Not present "<<endl;
    }

    deleteWord(root,"code");

    if(searchWord(root,"code")){
        cout<<"Present "<<endl;
    }else{
        cout<<"Not present "<<endl;
    }

    return 0;
}