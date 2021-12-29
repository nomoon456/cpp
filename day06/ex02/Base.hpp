#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
    virtual ~Base();
};

class A : public Base {
    public:
        A();
        ~A();
};

class B : public Base {
    public:
        B();
        ~B();
};

class C : public Base {
    public:
        C();
        ~C();
};

#endif