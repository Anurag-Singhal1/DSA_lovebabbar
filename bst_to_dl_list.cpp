#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// converting a bst to sorted doubly linked list
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
        Node* root = q.front();     //A
        q.pop();                    //B

        if(root==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);            // front se hatao and back pe lagado if queue is not empty 
            }
        }
        else{
            cout<<root->data<<" ";          //C
            if(root->left){                 //D
                q.push(root->left);
            } 
            if(root->right){
                q.push(root->right);
            }
        }
    }
}

// here, (prev is left)  and (next is right) : tree and dll same sa hi hai, not much difference in architecture
void convertIntoSortedDLL(Node* root, Node* &head){    // head pointer for linked list
    // base case
    if(root==NULL){
        return ;
    }
    // right subtree into LL
    convertIntoSortedDLL(root->right, head);          // void hai na so just simply call

    // attaching root node
    root->right  = head;

    // now ab uss head ke prev ko bhi to root se attach kro (doubly linked lsit hai na) 
    if(head!=NULL){
        head->left = root;
    }

    // now update the head of linked list
    head = root;

    // left subtree call
    convertIntoSortedDLL(root->left , head);
}

// function to print the linked list
void printLinkedList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->right;
    }cout<<endl;
}

int main(){
    Node* root = NULL;
    cout<<"Enter the data for node : ";
    takeInput(root);     // give input in any order, link nhi change honge, pehli node ke hisaab se lagata rhega.
    cout<<"Printing the tree : "<<endl;
    levelOrderTraversal(root);

    Node* head = NULL;
    convertIntoSortedDLL(root,head);
    cout<<endl<<"Printing Sorted Linked List : ";
    printLinkedList(head);

    return 0;
}
