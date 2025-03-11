#include <iostream>
#include <cmath>

namespace Mathoperation {
    double operation(double a, double b, char op) {
        switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':return a / b;
        case '%': return fmod(a, b);
        default: return NAN;
        }
    }
}

int main() {
    double x, y;
    char op;
    std::cout << "Enter first number: ";
    std::cin >> x;

    std::cout << "Enter second number: ";
    std::cin >> y;

    std::cout << "Enter operation: ";
    std::cin >> op;

    if (y == 0 && (op == '/' || op == '%')) {
        std::cout << "undefined ";
        return 1;

    }

    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
        std::cout << "invalid operator !";
        return 1;
    }

    std::cout << Mathoperation::operation(x, y, op);
    return 0;
}