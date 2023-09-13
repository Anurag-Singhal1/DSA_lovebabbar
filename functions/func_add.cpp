#include<iostream>
using namespace std;

int getsum(int a , int b){
    int sum = a+b;
    return sum;
}

int main(){
    int a ;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b;
    cout<<"Enter the value of b : ";
    cin>>b;

    int sum = getsum(a,b);
    cout<<"The sum of values are : "<<sum<<endl;
    return 0;
}