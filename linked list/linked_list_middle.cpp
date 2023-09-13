#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){                            // empty bhi banake chorna jruri hota hai
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

Node* getMiddle(Node* &head){
    if(head == NULL){    // if empty
        cout<<"Linked list is empty "<<endl;
        return head;
    }
    if(head->next == NULL){       // if only 1 node 
        return head;
    }
    //now linked lsit has more than 1 element
    Node* slow = head;
    // Node* fast = head;            // to get 4th in 6 element
    Node* fast = head->next;         // to get 3 in  element
    while(slow!= NULL && fast!=NULL){     // ye bina slow condin lagaye bhi koi issue nhi hai
        fast = fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
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
    cout<<"Middle of linked list is : ";
    cout<< getMiddle(head)->data << endl ;

    return 0;
}
