#pragma once

#include <iostream>
using namespace std;

class Student
{
public:

	string studentName, studentSurname, studentID; //�ye de�i�kenler
	
	void displayInformation(); //�ye fonksiyon


};

//Kaps�lleme i�lemi ile verilere eri�im denetim alt�na al�n�r.

void Student::displayInformation()
{
	cout << "Name:" << studentName << " " << studentSurname << endl;
	cout << "ID:" << studentID << endl;
}
