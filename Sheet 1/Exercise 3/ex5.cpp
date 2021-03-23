#include <iostream>

using namespace std;

//the gcd is the return value of this function
int gcd1(int n, int m) {
    while (n != m) { 
        if (n == 0) return n;
        if (m == 0) return m;
        if (n - m > 0) n -= m;
        else if (m - n > 0) m -= n;
    }
    return n;
}

//the gcd is passed trough the res parameter
void gcd2(int n, int m, int &res) {
    while (n != m) {
        if (n == 0) {
            res = n; //instead of returning n, we change the value of res
            break;
        }
        if (m == 0) {
            res = m;
            break;
        }
        if (n - m > 0) n -= m;
        else if (m - n > 0) m -= n;
    }
    if (n == m) res = n;
}

int main() {
    return 0;
}