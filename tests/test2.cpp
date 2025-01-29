#include <iostream>
#include <cassert>
#include "operaciones2.h"
using namespace std;

void test2() {
    assert(factorial(5) == 120);
    assert(combinacion(5, 2) == 10);

    try {
        factorial(-1);
        assert(false); 
    } catch (const invalid_argument &e) {
        assert(true); 
    }

    try {
        combinacion(5, 6);
        assert(false);
    } catch (const invalid_argument &e) {
        assert(true);
    }
}

int main() {
    test2();
    cout << "todas las preubas pasadas" << endl;
    return 0;
}
