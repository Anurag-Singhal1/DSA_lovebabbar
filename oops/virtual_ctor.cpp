#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base constructor\n";
    }
    virtual ~Base(){
        cout<<"Base destructor\n";
    }
};  

class Derived : public Base{
    int* a;

    public:
    Derived(){
        a = new int[1000];                                    // dynamic array of 1000 size 
        cout<<"Derived constructor\n";
    }
    ~Derived(){
        delete[] a;
        cout<<"Derived destructor\n";
    }
};

int main(){
    Base *b = new Derived();
    delete b;

    return 0;
}