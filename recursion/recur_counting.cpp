#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

// printing reverse counting
void printCounting(int n){
    if(n==0){
        return ;  // always have to use return in base case.
    }
    // cout<<n<<" ";  // back counting
    printCounting(n-1);    // recursive reln
    cout<<n<<" ";     // forward counting
}

int main(){

    printCounting(6);
    return 0;
}