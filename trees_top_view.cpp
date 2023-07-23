#include<bits/stdc++.h>
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

void printTopView(Node* root){        // by help of level order traversal
    if(root==NULL){
        return;
    }
    // create a map for storing hd(horizontal distance - 0,-1,-2,1,2,etc) and corresponding topnode->data
    map<int,int> topNode;

    // level order traversal in top view 
    // we will store a pair consisting of Node and horizontal distance
    queue<pair<Node*,int> > q;
    q.push(make_pair(root,0));   // root element horixontal distance is 0.

    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        // jo bhi horizontal distance(hd) hai , check if answer for hd already exists or not
        // below line means hum search krte-krte end tk pahuch gaye, lekin hd(hori dist.) nhi mila
        if(topNode.find(hd) == topNode.end()){       // map min like 0-rrot, -1 maps to root->left, aise....
            topNode[hd] = frontNode->data;     // if already pehle se -1,-2,1,etc inpe koi hai, then no insert
        }
        if(frontNode->left){       // if left exists of frontNode
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){       // if right exists of frontNode
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    // now our ans is in map
    cout<<"Printing the answer : "<<endl;
    for(auto i: topNode){
        cout<<i.first<<" : "<<i.second<<endl;
    }
}

void printBottomView(Node* root){        // by help of level order traversal
    if(root==NULL){
        return;
    }
    // create a map for storing hd(horizontal distance - 0,-1,-2,1,2,etc) and corresponding topnode->data
    map<int,int> topNode;

    // level order traversal in top view 
    // we will store a pair consisting of Node and horizontal distance
    queue<pair<Node*,int> > q;
    q.push(make_pair(root,0));   // root element horixontal distance is 0.

    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        
        topNode[hd] = frontNode->data;    
        
        if(frontNode->left){       // if left exists of frontNode
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){       // if right exists of frontNode
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    // now our ans is in map
    cout<<"Printing the answer : "<<endl;
    for(auto i: topNode){
        cout<<i.first<<" : "<<i.second<<endl;
    }
}

int main(){

    // Node* root = NULL;
    // root = buildTree();

    Node* root = buildTree();                // aise 1 line mein bhi kr skte hai
    // printTopView(root);
    printBottomView(root);
    
    return 0;
}