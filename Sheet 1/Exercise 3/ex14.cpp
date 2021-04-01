#include <iostream>
#include <cmath>

using namespace std;

double integrateTR(double f(double), double a, double b, int n)
{
    double h = (b - a) / n;
    double area = 0;
    for (int i = 1; i < n; i++)
    {
        area += (h / 2) * (f(a + (i - 1) * h) + f(a + i * h));
    }

    return area;
}

double g(double x)
{
    return x * x;
}

double h(double x)
{
    return sqrt(4 - x * x);
}

int main()
{
    int n = 1000;
    cout << integrateTR(g, 0, 10, n) << endl;
    cout << integrateTR(h, -2, 2, n) << endl;
    return 0;
}