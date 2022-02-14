#include <iostream>
#include <cstring>

using namespace std;

class String {
    int size = 0;
public:
    char *str;
    String(const char* nstr) {
        size = strlen(nstr) + 1;

        str = new char[size + 1];
        strcpy(str, nstr);
    }

    String& operator=(const String& nstr) {
        if(&nstr == this) {
            return *this;
        }

        delete[] str;
        str = new char[nstr.size];
        
        strcpy(str, nstr.str);
        return *this;
    }
};

int main() {
    String s1("Hello, world!");
    String s2("Hello, prac!");
    cout << s1.str << endl;
    cout << s2.str << endl;

    s1 = s2;

    cout << s1.str << endl;
    cout << s2.str << endl;

    s1.str[0] = 'A';

    cout << s1.str << endl;
    cout << s2.str << endl;

    return 0;
}