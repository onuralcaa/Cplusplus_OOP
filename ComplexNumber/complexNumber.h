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
	//const olmasýnýn sebebi inputtan baðýmsýz çalýþmasý.
	int getReal() const
	{
		return real;
	}
	int getImag() const
	{
		return imag;
	}
	void setValue(int r = 0, int i = 0);
	complexNumber addComplex(const complexNumber& oth);
	complexNumber multiplyComplex(const complexNumber& oth);
	complexNumber subtractComplex(const complexNumber& oth);
	complexNumber multiplyConstant(int constant);
	void multiplyMinus();
	void displayComplex();
};

complexNumber::complexNumber(int r, int i)
{
	real = r;
	imag = i;
	cout << "Complex number created." << endl;

}
//4 + 5i (example)

complexNumber::~complexNumber()
{
	cout << "Complex number destroyed." << endl;
}

complexNumber::complexNumber(const complexNumber& oth)
{
	real = oth.real;
	imag = oth.imag;
	cout << "Complex number copied to target." << endl;
}

void complexNumber::setValue(int r, int i)
{
	real = r;
	imag = i;
}

void complexNumber::displayComplex()
{
	imag >= 0 ? cout << real << "+" << imag << "i" << endl : cout << real << imag << "i" << endl; //kýsa if-else yapýsý
}





