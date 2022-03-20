#include <functional>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int x = 5;

    auto f = [x]() { cout << x << endl; };
    auto f2 = [](int a) { cout << a << endl; };

    vector<int> v {2, 4, 5, 6, 7, 8, 11, 14};
    for_each(v.begin(), v.end(), [](int a){ cout << a << endl;} );
    cout << endl;
    auto end = remove_if(v.begin(), v.end(), [](int x){ return x%2 == 0; });

    v.erase(end, v.end());
    for_each(v.begin(), v.end(), [](int a){ cout << a << endl;} );
}