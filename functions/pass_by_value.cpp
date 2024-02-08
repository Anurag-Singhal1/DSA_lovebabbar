#include<bits/stdc++.h>
using namespace std;

// pass by value - copy created, different addresss loactions (actual value pass nhi hoti hai )
void print(int num){
    cout<<num<<endl;
}

int main(){
    int a=5;

    print(a);

    return 0;
}