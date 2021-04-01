#include <iostream>

bool readFraction(int &numerator, int &denominator) {
    char separator;
    std::cin >> numerator >> separator >> denominator;
    if (separator == '/' && denominator != 0 && std::cin.good())
        return 1;
    else {
        numerator = 0, denominator = 0;
        return 0;
    }
}

int gcd(int n, int m) {
    while (n != m) { 
        if (n == 0) return n;
        if (m == 0) return m;
        if (n - m > 0) n -= m;
        else if (m - n > 0) m -= n;
    }
    return n;
}

void reduceFraction(int &numerator, int &denominator) {
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

void fractionOperation(int n1, int d1, int n2, int d2, int &n3, int &d3, char operation) {
    switch (operation) {
        case '+':
            n3 = n1 * d2 + n2 * d1;
            d3 = d1 * d2;
            break;
        case '-':
            n3 = n1 * d2 - n2 * d1;
            d3 = d1 * d2;
            break;
        case '*':
            n3 = n1 * n2;
            d3 = d1 * d2;
            break;
        case '/':
            n3 = n1 * d2;
            d3 = d1 * n2;
            break;
        

    }
    reduceFraction(n3, d3);
}

int main() {
    int n1, d1;
    int n2, d2;
    int n3, d3;
    char op;
    std::cout << "Write a fraction (a/b): ";
    readFraction(n1, d1);
    std::cout << "Write a fraction (a/b): ";
    readFraction(n2, d2);
    std::cout << "Choose an operation (+, -, *, /) ";
    std::cin >> op;
    fractionOperation(n1, d1, n2, d2, n3, d3, op);
    std::cout << "The result is " << n3 << '/' << d3 << "!\n";
    return 0;
}