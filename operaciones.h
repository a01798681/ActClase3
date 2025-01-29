#ifndef OPERACIONES_H
#define OPERACIONES_H
#include <stdexcept>

inline int suma(int a, int b) {
    return a + b;
}

inline int resta(int a, int b) {
    return a - b;
}

inline int multiplica(int a, int b) {
    return a * b;
}

inline double divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return static_cast<double>(a) / b;
}

#endif
