#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;

    int ans=0;
    while(n!=0){
    if(n & 1){    // if true, means if we get 1
        ans++;
    }
    n = n>>1;   // n ka jo part 1 se & ho gya, usko hatane ke liye, and naye wale part ko aage laane ke liye.
    }
    cout<<"No of set bits : "<<ans<<endl;

    return 0;
}