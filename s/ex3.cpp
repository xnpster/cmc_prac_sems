#include <iostream>
#include <list>

using namespace std;

template <class T>
void reverse(typename const T::iterator& begin, typename const T::iterator& end) {
    typename T::value_type 0;

    typename T::iterator rit = rbase();

    return 0;
}

int main() {
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    reverse<list<int>>(l.begin(), l.end());
    

    for(auto e : l) {
        cout << e << endl;
    }

    return 0;
}