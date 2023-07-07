#include<iostream>
using namespace std;

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int a = 67;
    int b = 6;

    cout<<max(a,b);
    return 0;
}