#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){              // default constructor
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){      // parameterised constructor
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    // destructor
    ~Node(){
        cout<<"Node with value : "<<this->data<<" deleted"<<endl;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        temp= temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //step1: create a node
    Node* newNode = new Node(data);
    //step2: node next to head
    newNode->next = head;
    //step3 : head prev to node
    head->prev = newNode;
    //step4: update head
    head= newNode;
}

void insertAtTail(Node* &head,Node* &tail, int data){
    // if linked list was empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //step1: create a node
    Node* newNode = new Node(data);
    //step2 - link tail to taht node
    tail->next = newNode;
    //step3 - link node prev to tail
    newNode->prev = tail;
    // step4 - updTE TAIL
    tail = newNode;

}

void insertAtPosition(Node* &head,Node* &tail, int data, int position){
    // if linked list was empty
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = getLength(head);
    if(position > len){
        insertAtTail(head,tail,data);
        return;
    }
    // insertion in middle
    //step1 - finding prev and curr
    int i=1;
    Node* prevNode = head;
    while(i<position-1){
        prevNode = prevNode->next;
        i++;
    }
    Node* curr = prevNode->next;
    //step2 - creating a node
    Node* newNode = new Node(data);
    //step3 - creating all links of prevNode and curr with newNode
    // prevNode <=> newNode <=>curr
    prevNode->next = newNode;
    newNode->prev = prevNode;
    newNode->next = curr;
    curr->prev = newNode;
}

void deleteNode(Node* &head,Node* &tail, int position){
    // if linked list is empty
    if(head == NULL){
        cout<<"Linked list was already empty "<<endl;
        return;
    }
    // if only one node in linked list
    if(head->next == NULL){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    // if position is greater than length
    int len = getLength(head);
    if(position  > len){
        cout<<"Pls enter a valid position to delete "<<endl;
        return;
    }
    // delete from starting : head
    if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    // delete from ending : tail
    // int len = getLength(head);
    if(position == len){
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    // delete from middle positions ( left <=> temp <=> right )
    int i=1;
    Node* left = head;
    while(i < position -1){
        left = left->next;
        i++;
    }
    Node* temp = left->next;
    Node* right = temp->next;

    left->next = right;
    right->prev  =left;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
    return;
}

int main(){

    Node* first = new Node(10);      // parameterised constructor called
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(first);
    cout<<endl;
    insertAtHead(head,tail,101);
    print(head);
    cout<<endl;
    insertAtTail(head,tail,501);
    print(head);
    cout<<endl;
    insertAtPosition(head,tail,700,1);
    print(head);
    cout<<endl;
    deleteNode(head,tail,1);
    print(head);
    cout<<endl;

    return 0;
}