#include<bits/stdc++.h>
using namespace std;

class A{
    int x;

    public:
    A(int val):x(val){};                           // ctor - constructor 

    int getX() const { return x;}
    void setX(int val) {x = val ;}

    friend class B;
    friend void print(const A &); 
};  

class B{
    public:
    void print(const A &a){
        // cout<<a.getX()<<endl;
        cout<<a.x<<endl;           // after writing this above (friend class B;) we can access x directly.
    }
};

void print(const A &a){
    cout<<a.x<<endl;
}

int main(){
    A a(5);
    B b;
    b.print(a);

    print(a);

    return 0;
}