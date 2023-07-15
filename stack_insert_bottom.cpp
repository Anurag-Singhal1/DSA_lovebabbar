#include<bits/stdc++.h>
using namespace std;

// insert top element at the bottom of stack
void solve(stack<int> &s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;              // this return is imp
    }
    int temp = s.top();
    s.pop();
    //recursive
    solve(s,target);

    // backtrack
    s.push(temp);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    print(s);

    if(s.empty()){
        cout<<"Stack is Empty "<<endl;
    }
    int target = s.top();
    s.pop();
    solve(s,target);

    print(s);

    return 0;
}