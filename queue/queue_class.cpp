#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int rear;
    int front;
    
    Queue(int size){    
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data){ 
        if(rear==size){
            cout<<"Queue is full "<<endl;
        }else{
            arr[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<"Queue is empty "<<endl;
        }else{
            arr[front] = -1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int getFront(){
        if(front==rear){  // queue is empty 
            return -1;
        }else{
            return arr[front];
        }
    }
    bool isEmpty(){
        if(front==rear){
            return true;
        }else{
            return false;
        }
    }
    int getSize(){
        return rear-front;
    }
};

int main(){

    Queue q(10); // size 10
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);

    cout<<"Size of queue is : "<<q.getSize()<<endl;

    q.pop();
    cout<<"Size of queue is : "<<q.getSize()<<endl;
    cout<<"Front element is : "<<q.getFront()<<endl;

    if(q.isEmpty()){
        cout<<"Queue is Empty "<<endl;
    }else{
        cout<<"Not Empty "<<endl;
    }

    return 0;
}