#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;         // pointerr bcz it contains the address of the next node

    Node(){              // constructor
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){        // parameterised constructor
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail, int data){   // by reference pass, bcz we want to change in original LL
    // CHECK FOR EMPTY  LL
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;    
        tail = newNode;    
        return;
    }
    // step1: creating a node
    Node* newNode = new Node(data);
    //step2 : connect with head node
    newNode->next = head;
    // step3 : update head 
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    // CHECK FOR EMPTY  LL
    if(head == NULL){             // tail == NULL bhi chal jaayega
        Node* newNode = new Node(data);
        head = newNode;    
        tail = newNode;    
        return;
    }
    //step1: create a node
    Node* newNode = new Node(data);
    //step2: connect with tail node
    tail->next = newNode;
    //step3: update tail
    tail =  newNode;
}

// print function of linked list
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail){
    if(head == NULL){          // if Linked List is empty
        Node* newNode = new Node(data);
        head = newNode;    
        tail = newNode;    
        return;
    }
    if(position==0){          // if inserting at head : starting
        insertAtHead(head,tail, data);
        return;
    }
    int len = findLength(head);       // if inserting at ending: tail
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }
    //step1: find the position : prev and curr ptr
    int i=1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    // step2 : creating a node
    Node* newNode = new Node(data);
    // step3 : new node ke next mein curr
    newNode->next = curr;
    // step4 : prev ke next mein curr
    prev->next = newNode;  
}

int main(){

    // Node* head = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail,20);
    insertAtHead(head, tail,30);
    insertAtHead(head, tail,40);
    insertAtHead(head, tail,50);
    insertAtTail(head, tail,70);

    print(head);
    cout<<endl;
    cout<<"head : "<<head->data <<endl;
    cout<<"tail : "<<tail->data <<endl;
    insertAtPosition(101,5,head,tail); // position : 2 ke baad insert krega
    print(head);
    cout<<endl;
    cout<<"head : "<<head->data <<endl;
    cout<<"tail : "<<tail->data <<endl;
    return 0;
}