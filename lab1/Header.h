#ifndef HEADER_H 
#define HEADER_H

class kvad
{
private:
	double a, b, c;

public:
	kvad(double a_val, double b_val, double c_val);
	double getA();
	double getB();
	double getC();
	double calculatedisc();
	void printfun();

};
#endif