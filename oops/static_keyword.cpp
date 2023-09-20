#include<bits/stdc++.h>
using namespace std;

class abc{
    public:
    static int x,y;

    // abc(int _x, int _y){
    //     x = _x;
    //     y = _y;
    // }

    void print() const{
        cout<<x<<" "<<y<<endl;
        // cout<< this->x <<" "<< this->y <<endl;
        // cout<< (*this).x <<" "<< (*this).y <<endl;
    }
};

int abc::x ;
int abc::y ;

int main(){

    // abc obj1 = {10,20};
    // abc obj2(3,4);                      // for this we need constructor

    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();

    abc obj2;
    obj2.x = 10;
    obj2.y = 20;

    obj1.print();                    // isme bhi same obj2 wali hi values aa jaayegi, bcz -> x, y same hi hai 
    obj2.print();

    return 0;
}
