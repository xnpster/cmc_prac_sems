#include <iostream>
using namespace std;

#include <list>
#include <vector>
/*

STL:
    1) контейнеры
    2) итераторы
    3) алгоритмы
        а) немодифицирующие
        б) сортирующие
        в) модифицирующие

Основные контейнеры:
    vector (динамически расширяющийся массив)
    list
    deque

    stack
    queue

Ассоциативные массивы:
    map (ключ(уникален) -> значение)
    multimap (ключ -> несколько значений)
    set (множество уникальных ключей)
    set (множество ключей)
    
    value_type
    size_type
    reference и const_ref

    iterator
    const_iterator
    reverse_iterator
    const_reverse_iterator

    1) input
    2) output
    3) forward
    4) biderectional
    5) random_access
*/

template <class T>
void print(std::vector<T> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}


template <typename T>
void print_normal(std::vector<T> &v) {
    typename std::vector<T>::iterator it = v.begin();
    typename std::vector<T>::iterator end = v.end();

    while(it != end) {
        cout << *it++ << endl;
    }
}

template <class T>
void print_reverse(std::vector<T> &v) {
    typename std::vector<T>::reverse_iterator it = v.rbegin();
    typename std::vector<T>::reverse_iterator end = v.rend();

    while(it != end) {
        cout << *it++ << endl;
    }
}


int main() {
    std::vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);

    print(v1);
    cout << endl;
    print_normal(v1);
    cout << endl;
    print_reverse(v1);

    

    return 0;
}