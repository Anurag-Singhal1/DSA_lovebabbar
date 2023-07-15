#include<bits/stdc++.h>
using namespace std;

// creating stack class by using array
class Stack{
    public:
    int* arr;
    int size;    // it shows total array size and not the no of elements
    int top;     // top is the index of top most element of index.

    Stack(int size){        // constructor
        arr = new int[size];
        this->size = size;
        top = -1;         // -1 index means currently stack is empty
    }
    // functions 
    void push(int data){
        if(size - top >1){
            // if space available then insert
            top++;
            arr[top] = data;
        }else{
            // space not available.
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"STack is undeflow, cant delete element. "<<endl;
        }else{
            top--;
        }
    }
    int getSize(){
        return top+1;
    }
    int getTop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }else{
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};


int main(){

    Stack s(4);  // here size, we can give any value
    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50); // stack overflow bcz size is 4 only.

    while(!s.isEmpty()){
        // cout<<"Size of stack is : "<<s.getSize()<<endl;
        // cout<<"Top element of stack is : "<<s.getTop()<<endl;
        cout<<s.getTop()<<" ";
        s.pop();
    }cout<<endl;
    cout<<"Size of stack is : "<<s.getSize()<<endl;
    cout<<s.getTop()<<endl;
    s.pop();

    return 0;
}