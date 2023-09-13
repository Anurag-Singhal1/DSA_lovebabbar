#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){

    string str;
    cout<<"input String : ";
    cin>>str;

    stack<char> s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    cout<<"Reverse String : ";
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }cout<<endl;
    
    return 0;
}