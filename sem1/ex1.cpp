#include <iostream>


using namespace std;

class v {
public:
    int x;
    v() { x = 0; cout << 0; }
    v(int a) { x = a; cout << 1; }
    v(const v &n) { x = n.x; cout << 2; }
    v &operator=(const v& v1) { x = v1.x; cout<< 3; return *this; }
    // v(v && v1) { x = v1.x; cout<< 4; }
    // v intToV(int x) { return v(x); };
    ~v() { cout << "[des" << x << "]"; };
};

v f(const v &a) {  cout << " f "; return a; }

int main() {
    v v1;
    v v2(10);
    cout << "Here" << endl;
    v v3(10);
    cout << "Here" << endl;
    v v4 = v();
    cout << "Here" << endl;
    v v5, v6 = f(v(1));
    cout << "Here" << endl;
    v5 = f(v(1));
    cout << "Here" << endl;
    return 0;
}