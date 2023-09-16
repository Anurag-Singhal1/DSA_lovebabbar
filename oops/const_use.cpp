#include<bits/stdc++.h>
using namespace std;

class abc{
    int a;
    int* b;
    int c;
 
    public:
    abc(int _a, int _b, int _c=0){                       // constructor 
        a = _a;
        b = new int(_b);
        c = _c;
    }
    // initialisation list  : new style of constructor writing 

    // abc(int _a, int _b, int _c): a(_a), b(new int(_b)), c(_c){}

    int getA() const {                                // getters
        return a;
    }
    void setA(int _val){                       // setters 
        a = _val;
    }

    int getB() const{
        return *b;
    }

};

void printABC(const abc &a){                // const hai, so we can only call get functions and not set()  
    cout<<a.getA() << " ";
}

int main(){
    abc a(5,2);
    printABC(a);

    return 0;
}