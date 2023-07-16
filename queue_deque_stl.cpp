#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq;

    //insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);

    cout<<"Size is : "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"Size is : "<<dq.size()<<endl;
    dq.pop_back();
    cout<<"Size is : "<<dq.size()<<endl;

    cout<<"Front is : "<<dq.front()<<endl; 
    cout<<"Back is : "<<dq.back()<<endl; 

    if(dq.empty()){
        cout<<"Deque is empty "<<endl;
    }else{
        cout<<"Not empty "<<endl;
    }

    return 0;
}