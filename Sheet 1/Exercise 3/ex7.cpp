#include <iostream>

using namespace std;

bool readint(int &x) {
    bool res;
    cin >> x;
    res = (cin.good() & cin.peek() == '\n');
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    return res;
}

int main() {
    int x;
    bool res;
    cout << "Write an integer: ";
    res = readint(x);
    cout << res;
    return 0;
}