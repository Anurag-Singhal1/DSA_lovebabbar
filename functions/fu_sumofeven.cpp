#include<iostream>
using namespace std;

int sumOfEven(int n){
    int sum = 0;
    for(int i=2;i<=n;i+=2){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;

    cout<<"The sum of even numbers upto n is : "<<sumOfEven(n)<<endl;
    return 0;
}