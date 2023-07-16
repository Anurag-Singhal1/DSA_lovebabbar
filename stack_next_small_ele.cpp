#include<bits/stdc++.h>
using namespace std;

//T.C. => O(N+N) = O(N)
// V.V.IMP :-  next smaller element (aage walo mein se jo sbse pehla chota element milega)
vector<int> nextSmaller(vector<int> &v){
    stack<int> s;
    s.push(-1);        // bcz rightmost element will always have ans -1.

    vector<int> ans(v.size());

    for(int i=v.size()-1;i>=0;i--){       // traversing right to left
        int curr = v[i];
        while(s.top()>=curr){  //jab tk stack mein curr se bada hai, chalate jao
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    } 
    return ans;
}

// to find previous smaller element in array
vector<int> prevSmaller(vector<int> &v){       // piche walo mein jo sbse pehla chota element milega
    stack<int> s;
    s.push(-1);      

    vector<int> ans(v.size());

    for(int i=0;i<v.size();i++){    // just traversing now left to right
        int curr = v[i];
        while(s.top()>=curr){  
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main(){

    vector<int> v {2,1,5,6,2,3};

    vector<int> ans1 = nextSmaller(v);
    for(auto i:ans1){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> ans2 = prevSmaller(v);
    for(auto i:ans2){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}