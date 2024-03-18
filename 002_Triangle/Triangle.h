#pragma once

#include<iostream>
#include<string>

using namespace std;

class Triangle {
public:
	Triangle(float a, float b, float c);
	~Triangle();
	Triangle(const Triangle& oth);
	bool isTriangle(float a, float b, float c);

	//inputtan baðýmsýz çalýþabilmesi için const tanýmlanmýþtýr.
	float getSideA() const { return sideA; }
	float getSideB() const { return sideB; }
	float getSideC() const { return sideC; }

	void setValue(float a, float b, float c);
	bool isEquilateral();
	bool isScalene();
	bool isIsosceles();
	void triangleType();
	float calculateArea();

private:
	float sideA, sideB, sideC;
};

Triangle::Triangle(float a, float b, float c)
{
	while (!isTriangle(a, b, c))
	{
		cout << "Please enter the sides (a-b-c)" << endl;
		cin >> a >> b >> c;
	}

	sideA = a;
	sideB = b;
	sideC = c;
	cout << "Triangle created." << endl;
}

Triangle::~Triangle()
{
	cout << "Triagnle destroyed." << endl;
}

Triangle::Triangle(const Triangle& oth)
{
	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;

	cout << "Triangle copied to target." << endl;
}

void Triangle::setValue(float a, float b, float c)
{
	while (!isTriangle(a, b, c))
	{
		cout << "Please enter the sides (a-b-c)" << endl;
		cin >> a >> b >> c;
	}

	sideA = a;
	sideB = b;
	sideC = c;
}

bool Triangle::isTriangle(float a, float b, float c)
{
	//ARANAN ÖZELLÝKLER
	//sideA: |b-c| < a < b+c
	//sideB: |a-c| < b < a+c
	//sideC: |b-a| < c < b+a

	if (!((abs(b - c) < a && (a < b + c))))
	{
		cout << "Invalid A" << endl;
		return false;
	}

	if (!((abs(a - c) < b && (b < a + c))))
	{
		cout << "Invalid B" << endl;
		return false;
	}

	if (!((abs(b - a) < c && (c < b + a))))
	{
		cout << "Invalid C" << endl;
		return false;
	}

	return true; //kenar bilgileri ile bir üçgen oluþturulabilir.
}