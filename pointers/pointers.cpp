#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

int main(){

    int a=5;
    cout<<&a<<endl;   // address of a

    // pointer create
    int* ptr = &a;

    // access the value ptr is pointing to
    cout<<*ptr<<endl;    // gives value of a - 5....here * is a dereference operator
    cout<<ptr<<endl;     // gives address of a 
    cout<<sizeof(ptr)<<endl;   // prints 8

    // bad practice
    // int* ptr;


    // NULL POINTER
    int* pt = nullptr ; // nullptr/0 - both works
    cout<<pt<<endl;  // gives 0 null pointer
    // cout<<*pt<<endl;   // error

    // COPYING A POINTER
    int b = 6;
    int* p = &b;
    int* q = p;   // copying
    cout<<*p<<endl; //6
    cout<<*q<<endl;  // 6

    return 0;
}