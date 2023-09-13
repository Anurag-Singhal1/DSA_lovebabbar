#include<iostream>
using namespace std;

bool checkprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        bool isprime = checkprime(i);
        if(isprime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}