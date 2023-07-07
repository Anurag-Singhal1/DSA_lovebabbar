#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

int main(){

    int a =5;
    int* p = &a;
    int** q = &p;

    cout<<"Value of a : "<<a<<" "<<*p<<" "<<**q<<endl;
    cout<<"Address of a : "<<&a<<" "<<p<<" "<<*q<<endl;
    cout<<"Address of p : "<<&p<<" "<<q<<endl;
    return 0;
}