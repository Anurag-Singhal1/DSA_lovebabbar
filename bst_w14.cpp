#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left= NULL;
        this->right= NULL;
    }
};

Node* buildTree(){    // give values in preorder : N L R
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    // base case
    if(data==-1){
        return NULL;
    }
    // 3 STEPS  : create the node, call for left, then call for right
    Node* root = new Node(data);

    cout<<"Enter data for left part of "<<data<<" node "<<endl;
    root->left = buildTree();
    cout<<"Enter data for right part of "<<data<<" node "<<endl;
    root->right = buildTree();

    return root;
}

void printLeftBoundary(Node* root){                // it is left side boundary and not the left view    
    // base case - if root is null or we are on leaf node, then go back
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    // print current node
    cout<<root->data<<" ";

    if(root->left){       //if-else hi aayega, bca agar left nhi hai, only then right mein jaana hai, vrna nhi
        printLeftBoundary(root->left);
    }
    else{                    // if left node is not present
        printLeftBoundary(root->right); 
    }
}

void printLeafBoundary(Node* root){      // boundary wale saare chahiye, so no if-else here 
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){ // if leaf node then just print
        cout<<root->data<<" ";
    }
    // recursion
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root){     // here we call for right side first, then for left 
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){ // if leaf node then print
        return;
    }
    // call for right node
    if(root->right){
        printRightBoundary(root->right);
    } 
    else{                                       // if right node is not present
        printRightBoundary(root->left);
    }
    cout<<root->data<<" ";
}

void boundaryTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<< root->data<<" ";           // root ko alag se hi print kara liya.

    printLeftBoundary(root->left);           // A
    printLeafBoundary(root);          // C
    printRightBoundary(root->right);          // B
}

int main(){

    Node* root = buildTree();
    cout<<endl;
    boundaryTraversal(root);

    return 0;
}