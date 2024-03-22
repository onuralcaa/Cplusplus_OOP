

#include <iostream>
#include "complexNumber.h"

int main()
{
	complexNumber number1(4.5);
	cout << "Real: " << number1.getReal()<<endl;
	cout << "Imag : " << number1.getImag()<<endl;
	number1.displayComplex();

	complexNumber number2(3, -6);
	cout << "Real: " << number2.getReal() << endl;
	cout << "Imag : " << number2.getImag() << endl;
	number2.displayComplex();

	complexNumber number3(number2);
	number3.displayComplex();
	number3.setValue(4, -7);
	number3.displayComplex();



	return 0;
}
