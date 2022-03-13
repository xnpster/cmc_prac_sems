#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(-2);
    l.push_back(3);

    list<int>::reverse_iterator it = l.rbegin();


    for(auto e : l) {
        cout << e << endl;
    }

    for(; it != l.rend();) {
        if(*it++ < 0) {
            l.erase(it.base());
            break;
        }
    }
    cout << endl;

    for(auto e : l) {
        cout << e << endl;
    }

}