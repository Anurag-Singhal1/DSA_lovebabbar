#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;     // left and right pointer 
    Node* right;

    Node(int data){      // constructor
        this->data = data;
        left = NULL;
        // this->left = NULL;           // this also can work 
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

bool kthAncestor(Node *root, int &k, int p)  // always pass by reference
{
    
    if(root==NULL){
        return false;
    }
    if(root->data==p){
        return true;
    }
    bool leftAns = kthAncestor(root->left, k, p);
    bool rightAns = kthAncestor(root->right, k, p);
    
    // wapas aate hue , check left ya right mein ans mila ya nhi

    if(leftAns || rightAns)   {  // if anyone is  true means we got p 
        k--;
    }  
    if(k==0){
        cout<<"Answer : "<<root->data<<endl;
        k=-1;
    }
    return leftAns || rightAns ;
}

int main(){

    Node* root = NULL;
    root = buildTree();

    int k=2;
    int p=5;

    kthAncestor(root,k,p);

    return 0;
}

//      1
//    /  \
//   2    3
//  / \
// 4   5


// k=1
// p=4
