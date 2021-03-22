#include <iostream>
#include <iomanip>

using namespace std;

double sqr(double n, double delta, int nMaxIter) {
	double rq = 1;
	while (abs(n - rq * rq) > delta && nMaxIter > 0) {
		rq = (rq + n / rq) / 2;
		nMaxIter--;
	}

	return rq;
}

int main() {
	double n, delta, rq;
	int nMaxIter;
	int precision = 1;
	cout << "Insert a number: ";
	cin >> n;
	cout << "delta = ";
	cin >> delta;
	cout << "nMaxIter = ";
	cin >> nMaxIter;

	rq = sqr(n, delta, nMaxIter);

	while (delta < 1) {
		delta *= 10;
		precision++;
	}

	cout << "The approximate square root is " << setprecision(precision) << rq << ".\n";

	return 0;
}