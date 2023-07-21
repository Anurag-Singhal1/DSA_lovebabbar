#include<bits/stdc++.h>
using namespace std;

// logic is here

int toSumTree(Node *root)
    {
        // Your code here
        if(root==NULL){
            return 0;
        }
        int leftAns = toSumTree(root->left);
        int rightAns = toSumTree(root->right);
        root->data = root->data + leftAns + rightAns;
        return root->data;
    }

int main(){

    toSumTree();
    return 0;
}