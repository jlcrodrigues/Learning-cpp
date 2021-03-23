#include <iostream>
#include <cmath>

using namespace std;

double round(double x, unsigned n) {
    return floor(x * pow(10, n) + 0.5) / pow(10, n);
}

int main() {
    double x;
    unsigned n;
    cout << "What's the value of x? ";
    cin >> x;
    cout << "What's the value of n?";
    cin >> n;

    cout << round(x,n);

    return 0;
}
