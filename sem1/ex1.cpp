#include <iostream>


using namespace std;

class v {
    int x;
public:
    v() { x = 0; cout << 0; }
    v(int a) { x = a; cout << 1; }
    v(v & n) { x = n.x; cout << 2; }
    v &operator=(const v& v1) { x = v1.x; cout<< 3; return *this; }
};

v f(v a) { cout << " f "; return a; }

int main() {
    v v1;
    v v2(10);
    v v3 ;
    v();
    
    v1 = f(v(10));
    return 0;
}



