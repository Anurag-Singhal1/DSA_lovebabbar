#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value : ";
    cin>>n;

    // while(n!=0){
    //     int rem = n%10;
    //     cout<<rem <<" ";
    //     n = n/10;
    // }

    for(;n!=0;n/=10){
        int rem = n%10;
        cout<<rem<<" ";
    }

    return 0;
}