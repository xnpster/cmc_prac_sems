#include <iostream>
using namespace std;

template <class T, int n = 10>
class Stack {
    T st[n];
    int top;
public:
    Stack(): top(0) {};
    void push(const T &a) {
        if(top == n) {
            return;
        }

        st[top++] = a;
    }

    T pop() {
        if(top == 0) {
            return 0;
        }

        return st[--top];
    }


};

int main() {
    Stack<int> istack;

    istack.push(1);
    istack.push(2);
    istack.push(3);
    cout << istack.pop() << endl;
    cout << istack.pop() << endl;
    cout << istack.pop() << endl;
    // cout << istack.pop() << endl;
    // cout << istack.pop() << endl;
    // cout << istack.pop() << endl;

    return 0;
}