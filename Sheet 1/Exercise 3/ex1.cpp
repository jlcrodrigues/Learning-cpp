#include <iostream>
#include <cmath>

using namespace std;

//returns the distance between 2 points (x1, y1) and (x2, y2)
double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

//returns the area of a triangle using the heron's formula
double area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a, b, c; //lengths
	double s; //semi-perimeter
	a = distance(x1, y1, x2, y2);
	b = distance(x1, y1, x3, y3);
	c = distance(x2, y2, x3, y3);
	s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
	double x1, y1, x2, y2, x3, y3; //coordinates
	cout << "What are the coordinates of the triangle? \n";
	cout << "x1 y1 = ";
	cin >> x1 >> y1;
	cout << "x2 y2 = ";
	cin >> x2 >> y2;
	cout << "x3 y3 = ";
	cin >> x3 >> y3;

	cout << "The area is " << area(x1, y1, x2, y2, x3, y3) << endl;
	return 0;
}