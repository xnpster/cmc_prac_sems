

template <class T>
void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x1 = 10, x2 =20;
    double y1 = 3.14, y2 = 0.1;

    swap(x1, x2);
    swap(y1, y2);
}