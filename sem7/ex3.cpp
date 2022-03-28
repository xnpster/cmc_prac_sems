#include <iostream>
#include <exception>

using namespace std;

/*
    exceptions

    noexcept
        unexcepted (если исключение выброшено несмотря на except)
*/

// Ha-ha, ISO C++17 says 
// "error: ISO C++17 does not allow dynamic exception specifications"
// void f() throw(int, char) {
//     throw 'a';
// }

int main() {
    try {
        throw 10; //1
        throw 1.2; //2
        throw "abc"; //3
    } catch(int a) { // 1

    } catch(double a) { // 2

    } catch(const char* p) { // 3

    } catch (...) {

    }
}