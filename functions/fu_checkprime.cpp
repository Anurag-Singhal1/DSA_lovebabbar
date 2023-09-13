#include<iostream>
#include<math.h>
using namespace std;

bool checkprime(int n){
    for(int i=2;i<=sqrt(n);i++){  // i<n   or i <=sqrt(n)
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin>>n;

    bool isprime = checkprime(n);
    if(isprime){
        cout<<n<<" is a prime no.\n";
    }
    else{
        cout<<n<<" is not a prime number.\n";
    }
    return 0;
}