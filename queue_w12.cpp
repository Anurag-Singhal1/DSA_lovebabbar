#include<bits/stdc++.h>
using namespace std;



int main(){

    // creation 
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Size of queue is : "<<q.size()<<endl;
    q.pop();      // jo pehle aayega wahi pehle niklega
    cout<<"Size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is Empty "<<endl;
    }else{
        cout<<"Not empty "<<endl;
    }

    // front element 
    cout<<"Front Element is : "<<q.front()<<endl;

    return 0;
}