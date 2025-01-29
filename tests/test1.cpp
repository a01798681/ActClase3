#include <iostream>
#include <cassert>
#include "operaciones.h"
using namespace std;

void test1() {
    assert(suma(5, 3) == 8);
    assert(resta(5, 3) == 2);
    assert(multiplica(5, 3) == 15);
    assert(divide(10, 2) == 5.0);

    try {
        divide(10, 0);
        assert(false);
    } catch (const invalid_argument &e) {
        assert(true);
    }
}

int main() {
    test1();
    cout << "todas las preubas pasadas " << endl;
    return 0;
}
