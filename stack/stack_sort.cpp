#include<bits/stdc++.h>
using namespace std;

// sorting the stack 
void insertSorted(stack<int> &s, int target){

    // base cases
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top() >= target){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertSorted(s,target);
    s.push(topElement);
}

void sortStack(stack<int> &s){      // simply memorise this pattern , too many questions on similar pattern
    if(s.empty()){
        return;
    }
    int target = s.top();   // step A     top element ko nikal lo
    s.pop();                // step B
    sortStack(s);           // step C      baaki ko recursion sort krke de dega
    insertSorted(s,target); // step D      now just insert that above element
}
// STEPS : A->B->C ->A->B->C ->A->B->C->.....then D->D->D->....

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

int main(){

    stack<int> s;
    s.push(20);
    s.push(10);
    s.push(80);
    s.push(60);
    s.push(87);
    s.push(25);

    print(s);
    sortStack(s);
    print(s);

    return 0;
}