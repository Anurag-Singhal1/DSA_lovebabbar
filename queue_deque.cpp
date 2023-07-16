#include<bits/stdc++.h>
using namespace std;

class Deque{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size = size;
        arr = new int[size];
        front=  -1;   // we gonna make circular dequeue
        rear=  -1;
    }
    void pushRear(int data){
        // 1. queue full check
        // 2. single element case
        // 3. circular flow
        // 4. normal flow

        if((front==0 && rear==size-1)|| (rear == front-1)){    
            cout<<"Queue is full "<<endl;
            return;
        }
        else if(front == -1){     // we are inserting 1st element
            front = rear = 0;
        }
        else if(rear == size-1 && front!=0){  // means front index khaali ho
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = data;
    }
    void pushFront(int data){      
        if((front==0 && rear==size-1)|| (rear == front-1)){    
            cout<<"Queue is full "<<endl;
            return;
        }
        else if(front == -1){     // we are inserting 1st element
            front = rear = 0;
        }
        // front mein hum peeche insert krte hain bcz aage to rear insert krta chal rha hai na
        else if(front==0 && rear!=size-1){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front] = data;
    }
    void popFront(){
        if(front==-1){
            cout<<"Queue is Empty "<<endl; 
        }
        else if(front==rear){
            arr[front] =-1;
            front = -1;
            rear  = -1;
        }
        else if(front==size-1){
            front= 0;
        }else{
            front++;
        }    
    }
    void popRear(){
        if(front==-1){  
            cout<<"Queue is Empty "<<endl; 
        }
        else if(front==rear){
            arr[front] =-1;
            front = -1;
            rear  = -1;
        }
        else if(rear==0){
            rear = size-1;
        }else{
            rear--;
        }
    }
};

int main(){


    return 0;
}