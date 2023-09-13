#include<bits/stdc++.h>
using namespace std;

class abc{
    int a;
    int* b;
    int c;

    abc(int _a, int _b, int _c){
        a = _a;
        b = new int(_b);
        c = _c;
    }
    // initialisation list  : new style of constructor writing 
    // abc(int _a, int _b, int _c): a(_a), b(new int(_b)), c(_c){}

    int getA(){
        return a;
    }
    void setX(int _val){
        a = _val;
    }

}

abc x = 

int main(){
    int a=2;
    cout<<a;

    return 0;
}