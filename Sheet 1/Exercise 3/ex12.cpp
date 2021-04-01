#include <iostream>
#include <cmath>

using namespace std;

double area(double radius)
{
    return pow(radius, 2) * 3.14156;
}

//returns the distance between 2 points (x1, y1) and (x2, y2)
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

//returns the area of a triangle using the heron's formula
double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a, b, c; //lengths
    double s;       //semi-perimeter
    a = distance(x1, y1, x2, y2);
    b = distance(x1, y1, x3, y3);
    c = distance(x2, y2, x3, y3);
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double area(double x1, double y1, double x2, double y2)
{
    return abs(x1 - x2) * abs(y1 - y2);
}

int main()
{
    return 0;
}