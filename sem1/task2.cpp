#include <cstdio>

struct S {
    int x;
    S(int n) { x = n; printf (" Cons "); }
    S (S && a) { x = a.x; printf ("Copy "); }
    ~S () { printf ("Des "); };
};

S f( S y ) {
    // y = S(3);

    return y;
}

int main () {
    S s(1);
    S b = s;
    // f(s);
    printf ("%d ", s.x);
    return 0;
}