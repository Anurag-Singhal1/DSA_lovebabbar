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

// STEP 1- check if there is a loop or not
bool checkForLoop(Node* &head){
    if(head == NULL){      // If LL is empty
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;
}

// STEP 2 : if loop, then return its starting point
// LOGIC : a+b = kC , WHERE A is distance upto starting point of circular loop, b is distance from circular loop starting to where slow and fast meets, k is constant, C is cycle of circular loop.
Node* startingPointLoop(Node* &head){
    if(head == NULL){      // If LL is empty
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow==fast){
            slow = head;
            break;
        }
    }
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;    // or return fast...same thing
}

// step 3 : now remove that loop : simple just points to NULL the previous node of starting point in loop
void removeLoop(Node* &head){
    if(head == NULL){      // If LL is empty
        return;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow==fast){
            slow = head;
            break;
        }
    }
    Node* prev = fast;
    while(slow!=fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eigth = new Node(80);
    Node* ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;
    eigth->next = ninth;
    ninth->next = fifth;      // here circular link 

    cout<<"Is there loop present : "<<checkForLoop(head)<<endl;
    cout<<"Starting point of circular list is : "<<startingPointLoop(head)->data <<endl;
    removeLoop(head);
    print(head);
    cout<<"Is there loop present : "<<checkForLoop(head)<<endl;
    return 0;
}
