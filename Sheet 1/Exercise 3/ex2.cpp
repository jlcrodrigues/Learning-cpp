#include <iostream>

using namespace std;

//This is the same solution used for exercise 2.7

template <typename T>
bool is_prime(T n) {
	bool prime = true;
	if (n >= 2) {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) prime = false;
		}
	}
	else prime = false;
	return prime;
}

void ex7a() {
	int n;
	bool prime;
	cout << "Insert a number: ";
	cin >> n;
	prime = is_prime(n);

	if (prime) cout << "Prime!";
	else cout << "Not prime!";
}

void ex7b() {
	for (int i = 2; i < 1000; i++) {
		if (is_prime(i)) cout << i << endl;
	}
}

void ex7c() {
	int count = 0;
	for (int i = 2; i < 1000; i++) {
		if (is_prime(i)) {
			cout << i << endl;
			count++;
		}
		if (count == 100) break;
	}
}

void ex7d() {
	unsigned long l = ULONG_MAX;
	for (l; !is_prime(l); l--);
	cout << l;
}