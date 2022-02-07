#include <iostream>
#include <cstring>

class String {
    int len;
    char* buf;
public:
    String(int n = 1) {
        buf = new char[n];
        buf[0] = '\0';
        len = n;
    }

    String(const char* s) {
        int nlen = strlen(s);
        len = nlen+1;
        buf = new char[len];
        strcpy(buf, s);
    }

    String(const String &v) {
        len = v.len;
        buf = new char[len];
        strcpy(buf, v.buf);
    }

    ~String() {
        delete [] buf; 
    }
};

int main() {

}