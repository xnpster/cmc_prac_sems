class B {
public:
    int b = 0;
};

class X : virtual public B { };

class Y : virtual public B { };

class Z : public X, public Y{ };

int main() {
    Z zaebis;
    zaebis.b = 10;
}