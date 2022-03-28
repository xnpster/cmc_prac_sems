#include <iostream>

using namespace std;

/*
RTTI
dynamic_cast

typeid
*/


class A {
public:
    virtual void f() {};
};


class B : public A {
public:
    // virtual void f() {};
};

int main() {
    A a, *pa;
    B b, *pb;

    pa = &a;

    pb = (B*)pa; // небезопасно

    pb = dynamic_cast<B*>(pa); 

    if(pb != NULL) {
        // OK
    } else {
        // NOT OK
    }

    A& ra = b;

    try {
        B& rb = dynamic_cast<B&>(ra);
    } catch (bad_cast) {

    }
}