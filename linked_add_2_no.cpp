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

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node* solve(Node* head1, Node* head2) {

    if(head1 == NULL){
        return head2;
    }
    if(head2 ==NULL){
        return head1;
    }

    //step 1 - reverse both linked list
    head1 = reverse(head1);
    head2 = reverse(head2);

    // step 2 - add both linked list
    Node* ansHead = NULL;
    Node* ansTail = ansHead;
    int carry = 0;

    while(head1!=NULL && head2!=NULL){
        int sum = carry + head1->data + head2->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        if(ansHead == NULL){
            // first node insert kr rahe
            ansHead = newNode;
            ansTail = newNode;
        }
        else{
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // when head1 length is greater than head2
    while(head1!=NULL){
        int sum = carry + head1->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }
    // when head2 length is greater than head1
    while(head2!=NULL){
        int sum = carry + head2->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }
    // handle carry alag se (Ex- 999+999)
    while(carry!=0){
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }

    // step 3 - reverse the ans linked list   
    ansHead = reverse(ansHead);
    return ansHead;
}

int main(){

    Node* head1 = new Node(9);
    Node* second1 = new Node(9);
    head1->next =second1;

    Node* head2 = new Node(9);
    Node* second2 = new Node(9);
    // Node* third2 = new Node(4);
    head2->next = second2;
    // second2->next = third2; 

    Node* ans = solve(head1,head2);
    print(ans);


    return 0;
}
