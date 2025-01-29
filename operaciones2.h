#ifndef OPERACIONES2_H
#define OPERACIONES2_H
#include <stdexcept>

inline unsigned long long factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("no se pueden numeros negativos.");
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

inline unsigned long long combinacion(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        throw std::invalid_argument("invalido para n y r.");
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

#endif