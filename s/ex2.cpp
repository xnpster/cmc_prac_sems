#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> v;

    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');
    v.push_back('f');
    v.push_back('g');
    v.push_back('h');

    vector<char>::iterator it = v.begin();
    it++;
    while(it != v.end()) {
        // cout << *it<< endl;
        v.erase(it);

        if(it != v.end()) {
            it++;
        }
    }

    vector<char>::reverse_iterator rit = v.rbegin();
    cout << endl;
    while(rit != v.rend()) {
        cout << *rit++ << endl;
    }

    return 0;
}