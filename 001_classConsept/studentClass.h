#pragma once

#include <iostream>
using namespace std;

class Student
{
public:

	string studentName, studentSurname, studentID; //üye deðiþkenler
	
	void displayInformation(); //üye fonksiyon


};

//Kapsülleme iþlemi ile verilere eriþim denetim altýna alýnýr.

void Student::displayInformation()
{
	cout << "Name:" << studentName << " " << studentSurname << endl;
	cout << "ID:" << studentID << endl;
}
