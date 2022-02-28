#include <iostream>

template <class T>
void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T>
T abs(const T& val) {
    return val > 0 ? val : -val;
}

int main() {
    int x1 = -10, x2 =-20;
    double y1 = -3.14, y2 = -0.1;

    swap(x1, x2);
    swap(y1, y2);
    std::cout << abs(x1) << std::endl;
    std::cout << abs(y1) << std::endl;

    
}