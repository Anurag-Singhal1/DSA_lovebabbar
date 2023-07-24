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

    while(data!=-1){         // -1 aane pe return
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

// searching in binary tree 
Node* findNodeInBST(Node* root, int target){
    // base case
    if(root==NULL){
        return NULL;
    }
    if(root->data==target){
        return root;
    }
    if(target > root->data){
        return findNodeInBST(root->right,target);        // search in right sub-tree
    }
    else{
        return findNodeInBST(root->left,target);
    }
}

// finding maximum val in binary search tree
int maxVal(Node* root){
    Node* temp = root;
    if(temp==NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp->data;
}

// deleting the node - 4 cases  
Node* deleteNodeInBST(Node* root, int target){
    // base case
    if(root== NULL){
        return NULL; 
    }
    Node* temp = findNodeInBST(root, target);       // now i have to delete this temp

    if(temp->left==NULL && temp->right==NULL){   
        // leaf node
        delete temp;
        return NULL;
    }
    else if(temp->right==NULL && temp->left!=NULL){
        Node* child = temp->left;
        delete temp;
        return child;
    }
    else if(temp->right!=NULL && temp->left==NULL){
        Node* child = temp->right;
        delete temp;
        return child;
    }
    else{  // dono child exists
    // inorder predecessor of left subtree  (left subtree mein max value)
        int inorderPre = maxVal(temp->left);
        temp->data  = inorderPre;
        temp->left = deleteNodeInBST(temp->left, inorderPre);
        return root;
    }
}

int main(){
    Node* root = NULL;
    cout<<"Enter the data for node : ";
    takeInput(root);
    cout<<"Printing the tree : "<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    deleteNodeInBST(root,100);
    cout<<endl;
    levelOrderTraversal(root);

    return 0;
}