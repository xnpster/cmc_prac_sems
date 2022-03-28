#include <iostream>
#include <exception>

using namespace std;

/*
    exceptions
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
    try {
        throw 10; //1
        throw 1.2; //2
        throw "abc"; //3
    } catch(int a) { // 1

    } catch(double a) { // 2

    } catch(const char* p) { // 3

    } catch (...) {
        
    }
}