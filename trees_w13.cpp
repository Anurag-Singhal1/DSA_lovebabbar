#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){      // constructor
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){   // building tree recursively
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    // base case
    if(data==-1){
        return NULL;
    }
    // STEPS : A,B and C
    Node* root = new Node(data);       // ye root object creation hi to hai in terms of Oops and * bcz new keyword returns the address of the dynamic memory(heap). so a pointer to store the address

    cout<<"Enter data for left part of "<<data<<" node "<<endl;
    root->left = buildTree();
    cout<<"Enter data for right part of "<<data<<" node "<<endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;     // queue means FIFO (first in first out )
        

}

int main(){

    Node* root = NULL;
    root = buildTree();

    return 0;
}