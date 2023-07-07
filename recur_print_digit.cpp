#include<bits/stdc++.h>      
using namespace std;

void printDigit(int n){
    // base case
    if(n==0){
        return;
    }
    printDigit(n/10);
    cout<<n%10<< " ";
}

int main(){

    printDigit(145);
    return 0;
}