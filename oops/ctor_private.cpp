#include<bits/stdc++.h>
using namespace std;

class Box{
    int width;

    Box(int val) : width(val){};         // ctor 
    public:

    int getWidth() const{
        return width; 
    }
    void setWidth(int val){
        width = val;
    }

    friend class BoxFactory;
};

class BoxFactory{
    int count;

    public:
    Box getABox(int w){
        count++;
        return Box(w);
    }
};

int main(){

    BoxFactory bfact;
    Box b = bfact.getABox(10);
    cout<<b.getWidth()<<endl;

    return 0;
}