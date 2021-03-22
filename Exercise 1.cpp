#include <iostream>
#include <cmath>

using namespace std;

void ex1() {
	char letter;
	cin >> letter;
	cout << (int)letter;
}

void ex2() {
	double a, b, c; //if the type is int mean will be int
	double mean;
	cout << "Please, input 3 integer numbers\n";
	cout << "A ? ";
	cin >> a;
	cout << "B ? ";
	cin >> b;
	cout << "C ? ";
	cin >> c;
	mean = (a + b + c) / 3;
	cout << "mean = " << mean << "\n";
	cout << "A - mean = " << a - mean << "\n";
	cout << "B - mean = " << b - mean << "\n";
	cout << "C - mean = " << c - mean << "\n";
}

void ex3() {
	double p, r;
	cout << "p? (kg/m3) ";
	cin >> p;
	cout << "r? (m) ";
	cin >> r;
	cout << "M = " << (4 * p * pow(r,3) * 3.14156) / 3 << " (kg)";
}

void ex4() {
	double a, b, c, d, e, f;
	cout << "Insert the values a through f \n";
	cin >> a >> b >> c >> d >> e >> f;
	cout << "The solution is (" << (c * e - b * f) / (a * e - b * d) << ", " << (a * f - c * d) / (a * e - b * d) << ")";
}

void ex5() {
	int t1h, t1m, t1s;
	cout << "Time1(hours minutes seconds) ? ";
	//cin >> t1h >> t1m >> t1s;
	cin >> t1h;
	cin.ignore(1);
	cin >> t1m;
	cin.ignore(1);
	cin >> t1s;
	int t2h, t2m, t2s;
	cout << "Time1(hours minutes seconds) ? ";
	//cin >> t2h >> t2m >> t2s;
	cin >> t2h;
	cin.ignore(1);
	cin >> t2m;
	cin.ignore(1);
	cin >> t2s;
	int t = (t1h + t2h) * 3600 + (t1m + t2m) * 60 + t1s + t2s;
	int d = t / (24 * 3600);
	int h = (t % (24 * 3600)) / 3600;
	int m = ((t % (24 * 3600)) % 3600) / 60;
	int s = (((t % (24 * 3600)) % 3600) % 60);
	cout << "Time1 + Time2 = " << d << " day, " << h << " hours, " << m << " minutes and " << s << " seconds.";
}

void ex6() {
	double px, py, qx, qy, rx, ry;
	cout << "1st coord ";
	cin >> px >> py;
	cout << "2nd coord ";
	cin >> qx >> qy;
	cout << "3rd coord ";
	cin >> rx >> ry;
	double l1 = sqrt(pow((px - qx), 2) + pow((py - qy), 2));
	double l2 = sqrt(pow((rx - qx), 2) + pow((ry - qy), 2));
	double l3 = sqrt(pow((px - rx), 2) + pow((py - ry), 2));
	double s = (l1 + l2 + l3) / 2;
	cout << "The area is " << sqrt(s * (s - l1) * (s - l2) * (s - l3));
}

int main() {
	ex5();
}