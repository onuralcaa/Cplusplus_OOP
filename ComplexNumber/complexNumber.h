#pragma once

#include <iostream>

using namespace std;

class complexNumber {
private:
		int real, imag;
public:
		complexNumber(int r = 0, int i = 0);
	~complexNumber();
	complexNumber(const complexNumber& oth);
	int getReal() const;
	int getImag() const;
	void setValue(int r = 0, int i = 0);
	complexNumber addComplex(const complexNumber& oth);
	complexNumber multiplyComplex(const complexNumber& oth);
	complexNumber subtractComplex(const complexNumber& oth);
	complexNumber multiplyConstant(int constant);
	void multiplyMinus();
	void displayComplex();
};

