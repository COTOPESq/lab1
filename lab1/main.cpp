#include "Header.h"
#include <iostream>
#include <fstream>
#include <vector> 

using namespace std;

void novec() {
	ifstream file1("input.txt");
	int n, a, b, c;
	file1 >> n;
	kvad* Kvad = new kvad[n];
	for (int i = 0; i < n; ++i) {
		file1 >> a;
		file1 >> b;
		file1 >> c;
		Kvad[i] = kvad(a, b, c);
	}

	ofstream outfile("output.txt");
	for (int i = 0; i < n; ++i){
		if (Kvad[i].calculatedisc() >= 0) {
			Kvad[i].printfun(outfile);
		}
	}
}

void withvec() {
	ifstream file1("input.txt");
	int n, a, b, c;
	file1 >> n;
	vector<kvad> Kvad(n);
	for (int i = 0; i < n; ++i) {
		file1 >> a;
		file1 >> b;
		file1 >> c;
		Kvad[i] = kvad(a, b, c);
	}

	ofstream outfile("output.txt");
	for (int i = 0; i < n; ++i) {
		if (Kvad[i].calculatedisc() >= 0) {
			Kvad[i].printfun(outfile);
		}
	}
}

int main() {
	novec();
	//withvec();
}
