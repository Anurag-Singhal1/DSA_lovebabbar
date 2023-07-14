#include<bits/stdc++.h>
using namespace std;

int main(){

    // creation of stack, similar like vector
    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // //pop
    // st.pop();
    // // check element at top
    // cout<<"Element at top : "<<st.top()<<endl;
    // // size 
    // cout<<"SIze of stack is : "<<st.size()<<endl;
    // // to check empty or not
    // if(st.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }else{
    //     cout<<"Stack has elements "<<endl;
    // }

    //-----------------------------------PRINTING STACK--------------------------------------------

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

    return 0;
}