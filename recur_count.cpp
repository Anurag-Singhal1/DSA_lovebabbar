#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

// printing reverse counting
void printCounting(int n){
    if(n==0){
        return ;  // always have to iuse return in base case.
    }
    cout<<n<<" ";  // processing
    printCounting(n-1);    // recursive reln
    // cout<<n<<" ";     // to seedhi counting
}

int main(){

    printCounting(6);
    return 0;
}