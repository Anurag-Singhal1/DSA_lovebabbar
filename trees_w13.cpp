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

void levelOrderTraversal(Node* root){      // root pointer that stores the address of root node
    queue<Node*> q;     // queue means FIFO (first in first out ), queue ke andar node store krni hai

    q.push(root);
    q.push(NULL);      

    while(!q.empty()){
        //A
        Node* temp = q.front();
        //B
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);            // front se hatao and back pe lagado if queue is not empty 
            }
        }
        else{
            //C
            cout<<temp->data<<" ";
            //D
            if(temp->left){
                q.push(temp->left);
            } 
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(Node* root){
    // base case
    if(root==NULL){  // means if root is a null pointer
        return;
    }
    // lNR
    inorderTraversal(root->left);
    cout<<root->data <<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root){
    // base case
    if(root==NULL){  // means if root is a null pointer
        return;
    }
    // NLR
    cout<<root->data <<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    // base case
    if(root==NULL){  // means if root is a null pointer
        return;
    }
    // LRN
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data <<" ";
}

int main(){

    Node* root = NULL;
    root = buildTree();

    levelOrderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);

    return 0;
}