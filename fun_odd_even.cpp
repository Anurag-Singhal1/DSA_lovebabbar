#include<iostream>
using namespace std;

bool oddEven(int n){
    if(n%2==0){
        return true; // even no
    }
    else{
        return false; //odd no.
    }
}

int main(){

    int n;
    cin>>n;

    bool iseven = oddEven(n);
    if(iseven){
        cout<<n <<" is an even number.\n ";
    }
    else{
        cout<<n<<" is an odd number.\n";
    }

    return 0;
}