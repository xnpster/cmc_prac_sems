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

    pb = &b;

    cout << typeid(*pa).name() << endl;
    pa = &b;
    cout << typeid(*pa).name() << endl;
    // if pa is NULL, bad_typeid throwed

    cout << typeid(B).name() << endl;
}