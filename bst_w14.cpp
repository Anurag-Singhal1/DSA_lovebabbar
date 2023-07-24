#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// same level order traversal code of binary tree
// -1 hote hi tree return kr dega
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

Node* insertIntoBST(Node* root, int data){
    if(root==NULL){                   // my tree is empty until now
        root = new Node(data);           // this is the 1st node that we are creating
        return root;
    }
    // not the first node
    if(root->data > data){
        // insert into left
        root->left = insertIntoBST(root->left,data);
    }else{
        // insert into right
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root){      // root pointer that stores the address of root node
    queue<Node*> q;     // queue means FIFO (first in first out ), queue ke andar node store krni hai

    q.push(root);
    q.push(NULL);      

    while(!q.empty()){
        Node* temp = q.front();     //A
        q.pop();                    //B

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);            // front se hatao and back pe lagado if queue is not empty 
            }
        }
        else{
            cout<<temp->data<<" ";          //C
            if(temp->left){                 //D
                q.push(temp->left);
            } 
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void preOrderTraversal(Node* root){               // N L R
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){               // L N R
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){               // L R N 
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

// searching in binary tree 
bool findNodeInBST(Node* root, int target){
    // base case
    if(root==NULL){
        return false;
    }
    if(root->data==target){
        return true;
    }
    if(target > root->data){
        return findNodeInBST(root->right,target);        // search in right sub-tree
    }
    else{
        return findNodeInBST(root->left,target);
    }
}

int main(){
    Node* root = NULL;
    cout<<"Enter the data for node : ";
    takeInput(root);
    cout<<"Printing the tree : "<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"Printing inorder : "<<endl;
    inOrderTraversal(root);
    cout<<endl;
    cout<<"Printing preorder : "<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Printing postorder : "<<endl;
    postOrderTraversal(root);    
    cout<<endl;

    bool ans = findNodeInBST(root,155);
    cout<<"Present or not : "<<ans<<endl;

    return 0;
}