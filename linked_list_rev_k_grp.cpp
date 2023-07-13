#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data= 0;
        this->next = NULL;
    }
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp  =head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp= temp->next;
    }cout<<endl;
}

int getLength(Node* &head){
    Node* temp  = head;
    int len = 0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseKNodes(Node* &head, int k){
    if(head==NULL){
        return NULL;   // also can be return head. 
    }
    if(head->next == NULL){
        return head;
    }
    int len = getLength(head);
    if(k>len){              // yw baaki bachi hui head ko dekhta hai....if k=4, len=6, then 2nd round, l=2. here k=4>2. hence, it return remaing list as it is.
        return head;
    }
    //step 1 : reverse first k nodes of linked list  ( prev <=> curr <=> forward)
    Node* prev = NULL;
    Node* curr = head;
    // Node* forward = curr->next;
    Node* forward;
    int count = 0;
    while(count<k){
        forward = curr->next;
        curr->next = prev;
        prev= curr;
        curr = forward;
        count++;
    }
    //step2  : if there is still nodes in LL
    if(forward!=NULL){
        head->next = reverseKNodes(forward,k);
    }
    return prev;
}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);
    head = reverseKNodes(head,3);
    print(head);

    return 0;
}
