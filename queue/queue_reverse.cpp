#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());   // stack mein push krke pop kr diya,and we get our reverse queue.
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void reverseRec(queue<int> &q){
    // base case
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();
    // recursive call
    reverseRec(q);
    // backtrack 
    q.push(temp);
}
// q.2 -> reverse first k elements of queue.
void reverseK(queue<int> &q, int k){
    stack<int> s;
    int count=0;
    while(count<k){
        s.push(q.front());
        q.pop();
        count++;
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int rem = q.size()-k;
    while(rem){
        q.push(q.front());
        q.pop();
        rem--;
    }
}

//q.3 ->  inter leave queue
void interleaveQueue(queue<int> &q){
    // Step A : separate both halves 
    int n = q.size();
    int k = n/2;
    queue<int> q2;
    while(k--){
        q2.push(q.front());
        q.pop();
    }
    while(!q2.empty()){
        q.push(q2.front());         // aage se nikalke peeche daalna haii
        q2.pop();
        q.push(q.front());
        q.pop();
    }
    // odd wala case
    if(n&1){
        q.push(q.front());
        q.pop();
    }
}

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    // q.push(9);

    print(q);
    // reverseQueue(q);
    // print(q);
    // reverseRec(q);
    // print(q);
    // reverseK(q,3);
    // print(q);

    interleaveQueue(q);
    print(q);

    return 0;
}