#include<iostream>
using namespace std;

int reverse(int n){
    int ans=0;
    while(n!=0){
        int rem = n%10;
        ans = ans*10 + rem;
        n/=10;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    cout<<"Reverse of ur digit is : "<<reverse(n)<<endl;
    return 0;
}