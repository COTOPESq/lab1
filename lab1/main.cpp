#include "Header.h"
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cout << "enter a:\t";
	cin >> a;
	cout << "\nenter b:\t";
	cin >> b;
	cout << "\nenter c:\t";
	cin >> c;

	kvad Kvad(a, b, c);
	if (Kvad.calculatedisc() >= 0) {
		Kvad.printfun();
	}
}
