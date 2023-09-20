#include<bits/stdc++.h>
using namespace std;

// class has 2 things : data member and member fucntion .  and class is blueprint of an object. 
// so means, jo sirf class ka hai means, wo sbhi objects ka haii 
class abc{
    public:
    int x,y;

    abc(){                          // default constructor 
        x=5;
        y=10;
    }

    static void print() {
        // no this pointer here , upar wale x,y bhi print nhi kr skte bcz wo static nhi hai means wo bhi kisi-na-kisi object ke honge hi 
        printf("I am in Static %s\n", __FUNCTION__);
    }
};

int main(){

    abc obj1;
    abc::print();
    obj1.print();

    abc obj2;
    abc::print();           
    obj2.print();

    return 0;
}
