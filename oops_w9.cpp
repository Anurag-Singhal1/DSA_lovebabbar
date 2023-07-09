#include<bits/stdc++.h>
using namespace std;

class Animal{
    // state or properties
    private:
    int weight;
    public:
    int age;
    string name;

    // default constructor
    Animal(){
        this->age = 0;
        this->weight = 0;
        this->name = "";
        cout<<"Construor Called"<<endl;
    }
    // parameterised constructor 
    Animal(int age){
        this->age = age;
        cout<<"Parameterised constructor called "<<endl;
    }
    Animal(int age, int weight){
        this->age = age;
        this->weight = weight;
        cout<<"Parameterised constructor 2 called "<<endl;
    }
    Animal(int age, int weight, string name){
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout<<"Parameterised constructor 3 called "<<endl;
    }

    // COPY CONSTRUCTOR :
    Animal (Animal &obj){        // here, pass by reference
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"I am inside copy constructor " <<endl;
    }

    // behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    // getter and setters
    int getWeight(){
        return weight;
    }
    void setWeight(int weight){
        this->weight = weight;
    }

    // to understand copy constructor
    void print(){
        cout<< this->age <<" "<< this->weight <<" "<<this->name<<endl;
    }

    // destructor
    ~Animal(){
        cout<<"I am inside destructor "<<endl;
    }

};

int main(){
    // cout<<"Size of empty class is : "<<sizeof(Animal);

    // object creation : by 2 types -> static and dynamic
    // STATIC memory

    // Animal ramesh;             // constructor called here
    // ramesh.age = 12;
    // ramesh.name = "Lion";
    // cout<<"Age of ramesh is : "<<ramesh.age <<endl;
    // cout<<"Name of ramesh is : "<<ramesh.name <<endl;

    // ramesh.eat();
    // ramesh.sleep();

    // ramesh.setWeight(101);
    // cout<<"Weight of ramesh is : "<<ramesh.getWeight() <<endl;


    // DYNAMIC MEMORY
    // int* a = new int;
    // Animal* suresh = new Animal;        // constructor called here
    // (*suresh).age = 15;
    // (*suresh).name = "billi";

    // alternate - dynamic
    // suresh->age = 17;
    // suresh->name = "kutta";

    // suresh->eat();
    // suresh->sleep();
    // cout<<suresh->age<<endl;


    // constructor :
    // Animal a;           // static
    // Animal* b = new Animal;      // dynamic

    // Animal a(10);          
    // Animal* b = new Animal(100, 10, "Anurag");     
    
    // object copy
    // Animal c =a;    // here copy construcor is called
    // Animal d(c);
    // Animal e(*b);  // here, our dynamic object is copied. sirf b to address deta na islye *b for value


    // deep UNDERSTANDING of copy constructor
    // Animal a;
    // a.age = 10;
    // a.setWeight(100);
    // a.name = "Anurag";
    // Animal b = a;
    
    // a.print();
    // b.print();

    // a.name[0] = 'S';
    // a.print();
    // b.print();


    // DESTRUCTOR
    Animal a;
    a.age = 5;


    return 0;
}