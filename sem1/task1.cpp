#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class B {
private:
    int x; 
public:
    B(int x = 10) { this->x = x; }
    B(B &b) { 
        cout << "[copy]";
        x = b.x + 10;
    }
    int get() const { return x; }
};

int main()
{
    B b1, b2 = b1, b3(b2);
    cout << b1.get() << b2.get() << b3.get() << endl;
    return 0;
}