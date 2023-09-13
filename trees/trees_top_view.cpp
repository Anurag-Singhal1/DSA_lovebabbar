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

// bottom view 
void printBottomView(Node* root){      // jsut removes the if condition of inserting in map
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

// by recursion - as it is rightview just call right wala first
void leftView(Node* root, vector<int> &ans, int level){   // ans by reference to track all the values, wapas jaate time we want no pop of values
    // base case
    if(root==NULL){
        return;
    }
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    // recursion
    leftView(root->left, ans, level+1);            // level increases
    leftView(root->right, ans, level+1);
}

int main(){

    Node* root = buildTree();                // aise 1 line mein bhi kr skte hai
    // printTopView(root);
    // printBottomView(root);

    // for left view
    vector<int> ans;
    int level = 0;
    leftView(root,ans,level);
    cout<<endl<<"Printing the left view : ";
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}