#include<iostream>
#include<cmath>
using namespace std;


// DIVISION METHOD....
int binToDec(int n){
    int ans =0;
    int i=0;
    while(n!=0){
        int rem = n%10;                            // n%2 also works...but n%10  is universal
        ans = rem*pow(2,i++) + ans;
        n/=10;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter a binary value : ";
    cin>>n;

    cout<<binToDec(n)<<endl;

    return 0;
}