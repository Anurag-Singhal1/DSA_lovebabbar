#include<iostream>
using namespace std;

int setbit(int n,int k){
    // int maskvalue = 1<<k;
    // int ans = n|maskvalue ;
    // return ans;

    return n|(1<<k);
}

int main(){

    int n;
    cout<<"Enter the value : ";
    cin>>n;

    int k;
    cout<<"Enter the set bit value : ";
    cin>>k;

    cout<<"Value after setting bit is : "<<setbit(n,k)<<endl;
    return 0;
}