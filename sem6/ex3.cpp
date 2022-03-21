#include <iostream>

using namespace std;

class A {
public:
    virtual void f() {
        cout << "A" << endl;
    };
};

class B: public A {
public:
    void f() override {
        cout << "B" << endl;
    };
};

class C: public B {
public:
    void f() override {
        cout << "C" << endl;
    };
};

// ТВМ - таблица виртуальных методов

int main() {
    A a, *pa;

    B b;
    C c;

    b.f(); // B
    c.f(); // C

    pa = &a;
    pa->f(); // A

    pa = &b;
    pa->f(); // B

    pa = &c;
    pa->f(); // C

    A& p2 = c;
    p2.f();  //C
}