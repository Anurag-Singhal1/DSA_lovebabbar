#include<bits/stdc++.h>
using namespace std;

void printMiddle(stack<int> &s, int &totalsize){
    if(totalsize==0){
        cout<<"Stack is empty "<<endl;
        return;
    }
    // base case
    
    if(totalsize/2 +1 == s.size()){
        cout<<"Middle element is : "<<s.top()<<endl;
        return;
    }
    int temp = s.top();
    s.pop();
    //recursive call
    printMiddle(s,totalsize);

    //backtrack
    s.push(temp);
}


int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalsize = s.size();
    printMiddle(s,totalsize);

    return 0;
}