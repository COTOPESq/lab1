#include <iostream>
using namespace std;

class kvad {
private:
	double a, b, c;
public:
	kvad(double a_val, double b_val, double c_val) : a(a_val), b(b_val), c(c_val) {}

	double getA() {
		return a;
	}

	double getB() {
		return b;
	}
	double gerC() {
		return c;
	}

	double calculatedisc() {
		return b * b - 4 * a * c;
	}

	void printfun() {
		cout << "a: " << a << " b: " << b << " c: " << c << endl;
	}
};