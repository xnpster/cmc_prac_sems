#include <iostream>

using namespace std;
class A {
protected:
    int a;
private:
    /* data */
public:
    A(int s = 0) {
        a = s;
    }
    
    void pr() {
        cout << a << endl;
    }
};


class B : public A {
    int b;
public:
    B() : A() {
        b = 10;
    }

    void pr() {
        cout << b << endl;
    }
};

int main() {
    A obj_a, *pa;
    B obj_b, *pb;

    obj_a.pr();
    obj_b.pr();

    pa = &obj_a;
    pb = &obj_b;

    pa = (A*) pb;

    pa->pr();

}
