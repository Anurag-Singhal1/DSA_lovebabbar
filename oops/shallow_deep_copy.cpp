#include<bits/stdc++.h>
using namespace std;

class abc{
    public:
    int x;
    int* y;

    abc(int _x, int _y) : x(_x), y(new int(_y)){}

    // default dumb copy constructor :  it does shallow copy 
    abc(const abc& obj){                     // here, obj is a 
        x = obj.x;                             // b.x = 
        y = obj.y;
    }

    // our smart deep copy 
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = new int(*obj.y);                //a ki val ko kisi naye locan pe assign kiy and wo add b ko diya
    // }

    void print() const{
        printf("X:%d\n Address of Y is :%p\n Value of Y is :%d\n\n ",x,y,*y);
    }

    ~abc(){
        delete y;                          
    }
};

int main(){
    // abc a(100,200);
    // a.print();

    // abc b = a;                  // here, copy constructor is called 
    // b.print();

    // *b.y = 20;
    // b.x= 10;
    // b.print();

    // cout<<"Printing a :\n ";
    // a.print();

    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();

    return 0;    // double free ki problem aayegi idhar in shallow copy bcz y already delete ho chuka hai na in object a 
    
}