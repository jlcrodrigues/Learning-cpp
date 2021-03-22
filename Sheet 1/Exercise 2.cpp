#include <iostream>
#include <cmath>
#include <iomanip> 
#include <vector>
#include <ctime>
#include <string>

using namespace std;

void ex1() {
	double a, b, c, d, e, f;
	cout << "Insert the values a through f \n";
	cin >> a >> b >> c >> d >> e >> f;
	if ((a * e - b * d) == 0) cout << "There is no solution!";
	else cout << "The solution is (" << (c * e - b * f) / (a * e - b * d) << ", " << (a * f - c * d) / (a * e - b * d) << ")";
}

void ex2a() {
	int max, min, n;
	cout << "Write 3 numbers.\n";
	cin >> n;
	max = n;
	min = n;
	for (int i = 0; i < 2; i++){
		cin >> n;
		if (n > max) max = n;
		if (n < min) min = n;
	}
	cout << "The smallest number is " << min << " and the largest is " << max;
}

void ex2b() {
	int max, min, n, n2;
	cout << "Write 3 numbers.\n";
	cin >> n;
	max = n;
	min = n;
	for (int i = 0; i < 2; i++) {
		cin >> n;
		if (n > max) max = n;
		if (n < min) min = n;
		else n2 = n;
	}
	cout << max << " " << n2 << " " << min;
}

void ex2c() {
	int max, min, n, n2;
	cout << "Write 3 numbers.\n";
	cin >> n;
	max = n;
	min = n;
	for (int i = 0; i < 2; i++) {
		cin >> n;
		if (n > max) max = n;
		if (n < min) min = n;
		else n2 = n;
	}
	if (min + n2 < max) cout << "Impossible!";
	else cout << "Possible!";
}

void ex3() {
	int a, b;
	cout << "Insert 2 integers: \n";
	cin >> a;
	cin >> b;
	if (a + b > INT_MAX) cout << "sum overflow";
	if (a + b < INT_MIN) cout << "sum underflow";
	else cout << a + b;
}

void ex4() {
	double w; 
	cout << "Insert the weight of the merchandise: ";
	cin >> w;
	if (w <= 500) cout << "Cost = 5 euros.";
	if (500 < w && w <= 1000) cout << "Cost = " << 5 + 1.5 * ((w - 500)/ 100)<<" euros.";
	if (w > 1000) cout << "Cost = " << 12.5 + 5 * ((w - 1000) / 250) << " euros.";
}

void ex5() {
	double a, b, c, d; //d is the discriminant
	cout << "Solution of Ax^2 + Bx + C = 0\n";
	cout << "Insert the coefficients (A B C): ";
	cin >> a >> b >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d == 0) cout << "The equation has one solution: " << (-b + sqrt(d)) / (2 * a);
	if (d > 0) cout << "The equation has two solutions: " << (-b - sqrt(d)) / (2 * a) << " and " << (-b - sqrt(d)) / (2 * a);
	if (d < 0) cout << "The equation has two complex solutions: " << -b / (2 * a) << " - " << sqrt(-d) / (2 * a) << "i and " << -b / (2 * a) << " + " << sqrt(-d) / (2 * a) << "i";
}

void ex6() {
	double n; //years after depositing
	double q; //amount
	double j; //annual interest rate
	cout << "Withdraw calculator" << endl;
	cout << "How many years since you deposited? ";
	cin >> n;
	cout << "How much did you deposit? ";
	cin >> q;
	cout << "What's the annual interest rate?(%) ";
	cin >> j;
	cout << "You can withdraw " << q * pow((1 + (j/100)), n);
}

//Used for exercise 7
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

void ex8a() {
	double angle; //in radians
	cout << "ang\t   sin\t\t   cos\t\t   tan\n";
	//cout << fixed << setprecision(6);

	for (double i = 0; i <= 90; i += 15) {
		angle = (i / 180) * 3.14159;
		cout << setprecision(0) << i << "\t" << fixed << setprecision(6) << sin(angle) << "\t" << cos(angle) << "\t";
		if (i == 90) cout << "infinite" << endl;
		else cout << tan(angle) << endl;
	}
}

void ex8b() {
	char sep;
	double start, end, step; //in degrees
	double angle; //in radians
	cout << "Insert the angle's range and interval: (start,end,step)\n";
	cin >> start >> sep >> end >> sep >> step;
	cout << start;

	cout << "ang\t   sin\t\t   cos\t\t   tan\n";
	for (double i = start; i <= end; i += step) {
		angle = (i / 180) * 3.14159;
		cout << setprecision(0) << i << "\t" << fixed << setprecision(6) << sin(angle) << "\t" << cos(angle) << "\t";
		if (i == 90) cout << "infinite" << endl;
		else cout << tan(angle) << endl;
	}
}

void ex9a() {
	char c1, c2, c3; //Instead of reading the number as int, read each digit as a char
	cout << "Insert a 3 digit integer: ";
	cin >> c1 >> c2 >> c3;
	if (c1 != c3) cout << "Not "; 
	cout << "Palindrome";
}

void ex9b() {
	int n, size = 0; //size is the number of digits in n
	bool pal = true; //true if the number is a palindrome
	cout << "Insert an integer: ";
	cin >> n;

	int n1 = n;
	while (n1 > 0) { //calculate the size by removing a digit per iteration
		n1 /= 10;
		size++;
	}

	for (int i = 1; i <= size / 2; i++) { //check the first and last digits and then remove then
		int p = size - i * 2 + 1;
		if (n / (int)pow(10, p) != n % 10) pal = false;
		n = (n % (int)pow(10, p)) / 10;
	}

	if (!pal) cout << "Not ";
	cout << "Palindrome";

}

void ex10() {
	int n, n1, i = 2;
	cout << "Insert a number: ";
	cin >> n;
	n1 = n; //n1 is used to check if 'x' can be printed

	cout << n << " = ";

	while (n > 1) {
		if (n % i != 0) i++; //if it is not divisible, move on to the next number
		if (n % i == 0 && is_prime(i) && n1 != n) cout << "x";
		if (is_prime(i) && n % i == 0) {
			cout << i;
			n /= i;
		}
	}
}

//The series are defined separetly
double serie11a(int u) {
	double uu = u;
	double res = 4 / (uu * 2 - 1);
	if (!(u % 2)) res *= -1;
	return res;
}

double serie11b(double u) { //defined iteratively
	double res = 1;
	while (u > 1) {
		res *= (1 / u);
		u--;
	}
	return res;
}

void ex11ab() { //used for series a) and b)
	double n, sum = 0;
	cout << "Insert n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += serie11b(i); //choose which serie
	}
	cout << sum;
}

void ex11c() {
	double n, x, sum = 0;
	cout << "Insert n: ";
	cin >> n;
	cout << "Insert x: ";
	cin >> x;

	for (int i = 1; i <= n; i++) {
		double u = i, r = 1;
		while (u > 1) {
			u--;
			r *= (x / u);
		}
		r *= pow(-1, i + 1);
		sum += abs(r);
	}

	cout << sum;
}

void ex12ab() {
	double var, sum = 0, i = 0;
	cout << "Insert the variation: ";
	cin >> var;
	while (abs(serie11b(i) - serie11b(i + 1)) > abs(var) || i < 1) {
		sum += serie11b(i); //choose which serie
		i++;
	}
	cout << sum;
}

void ex12c() {
	double var, x, v = 1, sum = 0, i = 0, r = 1, u;
	cout << "Insert the variation: ";
	cin >> var;
	cout << "Insert x: ";
	cin >> x;

	do {
		v = r; //v is use to store the last r
		r = 1;
		u = i;
		while (u > 0) {
			r *= (x / u);
			u--;
		}
		r *= pow(-1, i + 1);
		sum += abs(r);
		i++;
	} while (abs(r - v) > abs(var) || i < 2);

	cout << sum;
}

void ex13a() {
	int n; //number of elements
	int e; //current number
	int max, min, sum = 0;
	double mean, sdev = 0;

	cout << "How many numbers in the sequence? ";
	cin >> n;

	vector<int> numbers;

	for (int i = 0; i < n; i++) {
		cout << "Insert an element: ";
		cin >> e;
		sum += e;
		numbers.push_back(e); //add an element to the sequence
	}

	mean = (double)sum / double(n);
	min = numbers[0], max = numbers[0];

	for (int i = 0; i < n; i++) { //iterate trough the sequence
		sdev += sqrt(pow(numbers[i] - mean, 2));
		if (numbers[i] < min) min = numbers[i];
		if (numbers[i] > max) max = numbers[i];
	}

	sdev = sqrt(sdev / n);

	cout << "The largest number is " << max << " and the smallest number is " << min << ".\n";
	cout << "The sum is " << sum << ", the mean is " << mean << " and the standard deviation is " << sdev;
}

void ex13b() {
	int n = 0; //number of elements
	int e; //current number
	int max, min, sum = 0;
	double mean, sdev = 0;

	vector<int> numbers;

	do {
		cout << "Insert an element: ";
		cin >> e;
		if (e == 0) break;
		n += 1;
		sum += e;
		numbers.push_back(e); //add an element to the sequence
	} while (e != 0);

	mean = (double)sum / double(n);
	min = numbers[0], max = numbers[0];

	for (int i = 0; i < n; i++) { //iterate trough the sequence
		sdev += sqrt(pow(numbers[i] - mean, 2));
		if (numbers[i] < min) min = numbers[i];
		if (numbers[i] > max) max = numbers[i];
	}

	sdev = sqrt(sdev / n);

	cout << "The sequence has " << n << " numbers." << endl;
	cout << "The largest number is " << max << " and the smallest number is " << min << ".\n";
	cout << "The sum is " << sum << ", the mean is " << mean << " and the standard deviation is " << sdev;
}

void ex13c() {
	int n = 0; //number of elements
	int e; //current number
	int max, min, sum = 0;
	double mean, sdev = 0;

	vector<int> numbers;

	do {
		cout << "Insert an element: ";
		cin >> e;
		if (cin.eof() && cin.fail()) break;
		n += 1;
		sum += e;
		numbers.push_back(e); //add an element to the sequence
	} while (1);

	mean = (double)sum / double(n);
	min = numbers[0], max = numbers[0];

	for (int i = 0; i < n; i++) { //iterate trough the sequence
		sdev += sqrt(pow(numbers[i] - mean, 2));
		if (numbers[i] < min) min = numbers[i];
		if (numbers[i] > max) max = numbers[i];
	}

	sdev = sqrt(sdev / n);

	cout << "The sequence has " << n << " numbers." << endl;
	cout << "The largest number is " << max << " and the smallest number is " << min << ".\n";
	cout << "The sum is " << sum << ", the mean is " << mean << " and the standard deviation is " << sdev;
}

void ex14() { ///////////wip
	double n, delta, rq = 1;
	int nMaxIter;
	int precision = 1;
	cout << "Insert a number: ";
	cin >> n;
	cout << "delta = ";
	cin >> delta;
	cout << "nMaxIter = ";
	cin >> nMaxIter;

	while (abs(n - rq * rq) > delta && nMaxIter > 0) {
		rq = (rq + n / rq) / 2;
		nMaxIter--;
	}

	while (delta < 1) {
		delta *= 10;
		precision++;
	}

	cout << "The approximate square root is " << setprecision(precision) << sqrt(n) << ".\n";
	cout << "The calculated square root is " << setprecision(precision) << rq << ".\n";
	cout << "The difference is " << setprecision(precision) << abs(sqrt(n) - rq);
}

void ex15() {
	int n1; //first random number
	int n2; //second random number
	int ans; //answer
	double timer;


	n1 = rand() % 8 + 2;
	n2 = rand() % 8 + 2;

	time_t start, finish;


	time(&start);
	cout << "How much is " << n1 << " * " << n2 << "? ";
	cin >> ans;
	time(&finish);

	timer = difftime(finish, start);

	if (ans != n1 * n2)
		cout << "Very Bad" << endl;
	else if (timer < 5)
		cout << "Good" << endl;
	else if (timer >= 5 && timer <= 10)
		cout << "Satisfactory" << endl;
	else
		cout << "Insufficient" << endl;

}

void ex16() {
	char input = '0';
	string n1; //first operand
	string n2; //second operad
	char operation;
	char cOperand = '1'; //displays the operand being written (1 or 2)
	double display = 0;
	double memory = 0; 
	bool doOperation = 0; //check if an operation as been requested

	//User manual
	cout << "Write down the operation you want to perform followed by ';'. ";
	cout << "Ex: 1*2; \n\n";
	cout << "Other commands: \n";
	cout << "  M: Save the value on display to memory.\n";
	cout << "  MR: Show the value stored in memory.\n";
	cout << "  MC: Clean the memory.\n";
	cout << "  M+: Add the value in memory to the value on display.\n";
	cout << "  M-: Subtract the value in memory to the value on display.\n";
	cout << "  C: Clean the display.\n\n";
	
	while (1) {	//main loop
		cout << ">";
		while (input != ';') { //reads a command
			cin >> input;

			if (isdigit(input) || input == '.') { //adds digits to the operands
				if (cOperand == '1') n1 += input;
				else n2 += input;
			}
			else if (input != 'M' && input != 'C' && input != ';') { //chooses the operator
				doOperation = 1;
				operation = input;
				cOperand = '2';
			}
			else if (input == 'C') display = 0;
			else if (input != ';') { //memory operations
				cin >> input;
				switch (input) {
				case 'C': 
					memory = 0;
					break;
				case '+':
					display += memory;
					break;
				case '-': 
					display -= memory;
					break;
				case 'R': 
					cout << "M: " << memory << endl;
					break;
				case ';':
					memory = display;

				}
			}
		} 
		
		if (doOperation) { //does the operation if one has been requested
			switch (operation) {
			case '+': 
				display = stod(n1) + stod(n2);
				break;
			case '-': 
				display = stod(n1) - stod(n2);
				break;
			case '*': 
				display = stod(n1) * stod(n2);
				break;
			case '/': 
				display = stod(n1) / stod(n2);
				break;
			default: cout << "Invalid Operation! \n";
			}
		}
		cout << "||" << display << endl;
		doOperation = 0;
		cOperand = '1';
		input = '0';
		n1 = "", n2 = ""; //reset the operands
	}

}

int main() {
	//choose the exercise
	ex14();

	return 0;
}