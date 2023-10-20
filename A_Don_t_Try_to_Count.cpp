#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    string x;
    cin>>x;
    string s;
    cin>>s;

    int count=0, cnt = 5;

    while(cnt--){
        if(x.find(s) != string::npos){
            cout<<count<<endl;
            return;
        }
        else{
            x+=x;
            count++;
        }
    }

    cout << -1 << "\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}