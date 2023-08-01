#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s = "  ";
    for(int i=s.length()-1;i>= 0;i--){
        s[i] = '*';
        // s[i] += " "
        cout << s << '\n';
    }

    // s.push_back('b');
    return 0;
}