#include <iostream>
    namespace A {
        int x = 100;
    };

    namespace B {
        int x = 200;
    }

int main() {
    using std::cout;
    using namespace A;
    using namespace B;

    cout << x << std::endl;
}