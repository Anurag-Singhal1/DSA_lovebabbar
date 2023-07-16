#include<bits/stdc++.h>
using namespace std;

class CirQueue {
    public:
    int* arr;
    int size;
    int front;
    int rear;
    CirQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int data){
        // queue full check
        // single element case
        // circular flow
        // normal flow
        
        if((front==0 && rear==size-1)|| (rear == front-1)){     // one condin is when rear = front-1
            cout<<"Queue is full "<<endl;
        }
        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size-1 && front!=0){  // means front index khaali ho
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear]  = data;
        }

    }
    void pop(){
        // empty check
        // single element
        // circular nature
        // normal flow

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
};

int main(){


    return 0;
}