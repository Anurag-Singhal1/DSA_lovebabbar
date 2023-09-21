#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
#include<cmath>
using namespace std;

void solve1(int a){   // pass by value
    a++;
}
void solve2(int& a){   // pass by reference
    a++;
}

int main(){

    int a =5;
    int& b=a;     // b is a reference variable
    cout<<&a<<"  "<<&b<<endl;  // address is same for both....bcz, a and b ek hi box pr point kr rahe..
    cout<<a<<"  "<<b<<endl;  //5

    solve1(a);   // pass by value 
    cout<<a<<"  "<<b<<endl;

    solve2(a);   // pass by reference
    cout<<a<<"  "<<b<<endl;
    
    return 0;
}