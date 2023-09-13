#include<bits/stdc++.h>
using namespace std;

// we gonna make circular dequeue
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
            arr[front]  = -1;
            front= 0;
        }else{
            arr[front]  = -1;
            front++;
        }    
    }
    void popRear(){
        if(front==-1){  
            cout<<"Queue is Empty "<<endl; 
        }
        else if(front==rear){
            arr[front] =-1;    // front and rear are on same index. so, no difference
            front = -1;
            rear  = -1;
        }
        else if(rear==0){
            arr[rear] = -1;
            rear = size-1;
        }else{
            arr[rear] = -1;
            rear--;
        }
    }
    // we dont have to write/do this
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main(){

    Deque dq(10);  // size - 10
    dq.print();     // 10 garbage value may be 0s

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);
    dq.pushRear(70);
    dq.pushRear(80);

    dq.print();

    dq.popRear();
    dq.print();
    dq.popRear();
    dq.print();

    dq.popFront();
    dq.print();
    dq.popFront();
    dq.print();
    dq.popFront();
    dq.print();

    dq.pushFront(101);
    dq.print();
    dq.pushFront(102);
    dq.print();
    dq.pushFront(103);
    dq.print();
    dq.pushFront(104);
    dq.print();
    
    dq.popFront();
    dq.print();
    dq.popFront();
    dq.print();

    dq.pushRear(201);
    dq.print();
    dq.pushRear(202);
    dq.print();
    dq.pushRear(203);
    dq.print();
    dq.pushRear(204);
    dq.print();
    dq.pushRear(205);
    dq.print();
    dq.pushRear(206);
    dq.print();
    

    return 0;
}