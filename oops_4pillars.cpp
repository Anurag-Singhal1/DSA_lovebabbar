#include<bits/stdc++.h>
using namespace std;

// class Animal {
//     protected:
//     int age;
//     int weight;
    
//     // void eat(){
//     //     cout<<"Eating " <<endl;
//     // }
// };
// //INHERITANCE : 
// class Dog:private Animal{   // ye wala public/private/protected hi imp hai...
//     public : 
//     void print(){
//         cout<<this->age;
//     }

// };

// int main(){
//     Dog d1;
//     d1.print();           // this works
//     // cout<<d1.age;            // here error protected can be accessed only inside class

//     return 0;
// }

//------------------------------------- multiple inheritance--------------------

// class A{
//     public:
//     int physics;
//     int chemistry;
//     A(){
//         chemistry = 101;
//     }
// };
// class B{
//     public:
//     int chemistry;
//     B(){
//         chemistry  =501;
//     }
// };
// class C :public A, public B{
//     public:
//     int maths;
// };

// int main(){
//     C obj;
//     cout<<obj.physics << " "<<obj.B::chemistry <<" "<<obj.maths <<endl;

//     return 0;
// }
//----------------------hierarchical inheroitance------------------------------

// class Car{
//     public:
//     int age;
//     int weight;
//     string name;
//     void speedUp(){
//         cout<<"Speed thrills but kills"<<endl;
//     }
// };
// class Scorpio : public Car{

// };
// class Fortuner : public Car{
    
// };

// int main(){
//     Scorpio x;
//     x.speedUp();
//     Fortuner y;
//     y.speedUp();
//     cout<<x.age<<" "<<y.age<<" "<<endl;

//     return 0;
// }

//========================================= POLYMORPHISM =====================================

// class Maths{
//     public:
//     int sum(int a, int b){
//         cout<<"I am in first sum "<<endl;
//         return a+b;
//     }
//     int sum(int a, int b, int c){         // function overloading
//         cout<<"I am in second sum "<<endl;
//         return a+b+c;
//     }
//     int sum(int a, float b){
//         cout<<"I am in third sum "<<endl;
//         return a+b+10;
//     }
// };

// int main(){
//     Maths obj;
//     cout<<obj.sum(10,20.5f);

//     return 0;
// }

// ----------------------------OPERATOR OVERLAODING ---------------------------------

// class Param{
//     public:
//     int val;

//     void operator+(Param &obj2){
//         int value1 = this->val;
//         int value2 = obj2.val;
//         cout<<(value2 - value1)<<endl;
//     }
// };

// int main(){
//     Param obj1, obj2 ;
//     obj1.val = 50;
//     obj2.val = 10;

//     // this should print the difference between them
//     obj1 + obj2 ;       // obj1 is current object and obj2 is input parameter and (+ as a function call)

//     return 0;
// }

// ----------------------------------RUNTIME POLYMORPHISM------------------------------------
// OVER-RIDING METHOD :

class Animal{
    public:
    void speak(){          // virtual for upcasting
        cout<<"Speaking "<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak(){       // over-riding
        cout<<"Dog barks "<<endl;
    }
};

int main(){
    // Animal a;
    // a.speak();
    // Dog d;
    // d.speak();

    // Animal* a = new Animal;
    // a->speak(); 
    // Dog* d = new Dog;
    // d->speak();

    // upcasting : parent class pointer, child class object pr create krte hai
    Animal* a = new Dog;
    a->speak();

    //downCASTING : chils class pointer here
    Dog* d = (Dog*)new Animal;        // we typecasted into dog class.
    d->speak();

    return 0;
}