#include <iostream>
#include "MyMathLib.h"
#include "operaciones.h"
#include "operaciones2.h"
#include <stdexcept>
using namespace std;

int main() {
    try {
        std::cout << "suma: " << suma(5, 3) << '\n';
        std::cout << "resta: " << resta(5, 3) << '\n';
        std::cout << "multiplo: " << multiplica(5, 3) << '\n';
        std::cout << "division: " << divide(10, 2) << '\n';
        std::cout << "factorial: " << factorial(5) << '\n';
        std::cout << "combinacion: " << combinacion(5, 2) << '\n';
        std::cout << "Sqrt(9): " << mySqrt(9) << '\n';
    } catch (const exception &e) {
        std::cerr << "error: " << e.what() << '\n';
    }
    return 0;
}
