#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the 2 numbers : ";
    cin>>n1>>n2;

    char oper;
    cout<<"Enter the oper (+,-,*,/,%) ";
    cin>>oper;


    switch(oper){
        case '+' : cout<<n1+n2<<endl;
        break;
        case '-' : cout<<n1-n2<<endl;
        break;
        case '*' : cout<<(n1*n2)<<endl;
        break;
        case '/' : cout<<n1/n2<<endl;
        break;
        default : cout<<n1%n2<<endl;

    }

    return 0;
}