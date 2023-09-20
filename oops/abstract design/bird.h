#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;

    // class that inherits this class has to implement pure virtual functions.
};

class sparrow: public Bird{
    private:
    void eat(){
        std::cout<<"Sparrow is eating\n";
    }
    void fly(){
        std::cout<<"Sparrow is flying\n";
    }
};

class eagle: public Bird{
    private:
    void eat(){
        std::cout<<"Eagle is eating\n";
    }
    void fly(){
        std::cout<<"Eagle is flying\n";
    }
};

class pigeon: public Bird{
    private:
    void eat(){
        std::cout<<"Pigeon is eating slowly.\n";
    }
    void fly(){
        std::cout<<"Pigeon is flying faster.\n";
    }
};

#endif // BIRD_H
