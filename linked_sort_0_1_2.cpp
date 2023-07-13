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

// void sortZeroOneTwo(Node* &head){           // here data replacement
//     int zero=0;
//     int one = 0;
//     int two = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             zero++;
//         }else if(temp->data==1){
//             one++;
//         }else{
//             two++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while(zero--){
//         temp->data = 0;
//         temp = temp->next;
//     }
//     while(one--){
//         temp->data = 1;
//         temp = temp->next;
//     }
//     while(two--){
//         temp->data = 2;
//         temp = temp->next;
//     }
// }

Node* sort2(Node* &head){  // replacement pointers
    if(head==NULL || head->next==NULL){
        return head;
    }

    // create dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // traverse the original LL
    Node* curr = head;
    while(curr!=NULL){
        if(curr->data==0){
            // take out the zero wali node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the   zero node in zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if(curr->data == 1){
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            oneTail->next = temp;
            oneTail = temp;
        }
        else{
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            twoTail->next = temp;
            twoTail = temp;
        }
    }
    // remove dummy  nodes(-1) and join them all

    // modify 1 wali list
    Node* temp  = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    // modify 2 wali list
    temp = twoHead;
    twoHead = twoHead->next;
    temp->next  = NULL;
    delete temp;

    // join all lists
    if(oneHead!=NULL){
        zeroTail->next = oneHead;
        if(twoHead!=NULL){
            oneTail->next = twoHead;
        }
    }
    else{
        if(twoHead!=NULL){
            zeroTail->next = twoHead;
        }
    }
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    return zeroHead;
}

int main(){

    Node* head = new Node(0);
    Node* second = new Node(1);
    Node* third = new Node(0);
    Node* fourth = new Node(1);
    Node* fifth = new Node(2);
    Node* sixth = new Node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);
    // sortZeroOneTwo(head);
    head = sort2(head);
    print(head);

    return 0;
}
