#include <iostream>

class A {
    int a;
public:
    A(int x = 0) : a(x) { };
};


class B {
    int b;
public:
    B(int x = 0) : b(x) { };
};

class C : public A, public B{
    int c;
public:
    C(int x, int y, int z): A(x), B(y), c(z) {};  
};

int main() {

}