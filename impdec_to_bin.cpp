#include<iostream>
#include<cmath>
using namespace std;

// DIVISION METHOD......
int decToBin(int n){
    int ans=0;
    int i =0;
    while(n!=0){
        int bit = n%2;
        ans = bit*pow(10,i++) + ans;
        n/=2;
    }
    return ans;
}

// BITWISE METHOD.....
int decToBin2(int n){
    int ans=0;
    int i =0;
    while(n!=0){
        int bit = n&1 ;
        ans = bit*pow(10,i++) + ans;
        n= n>>1;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;

    cout<<decToBin2(n);

    return 0;
}