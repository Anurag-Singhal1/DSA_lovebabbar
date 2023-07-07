#include<iostream>
#include<cmath>
using namespace std;


// DIVISION METHOD....
int binToDec(int n){
    int ans =0;
    int i=0;
    while(n!=0){
        int rem = n%2;  // n%10 also works...it is universal
        ans = rem*pow(2,i++) + ans;
        n/=10;
    }
    return ans;
}

// BITWISE METHOD....
int binToDec2(int n){
    int ans =0;
    int i=0;
    while(n!=0){
        int rem = n&1 ;
        ans = rem*pow(2,i++) + ans;
        n = n>>1 ;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter a binary value : ";
    cin>>n;

    // cout<<binToDec(n)<<endl;
    cout<<binToDec2(n)<<endl;

    return 0;
}