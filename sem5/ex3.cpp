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
        a = 100;
        b = 10;
    }
};

int main() {

}
