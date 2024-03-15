#pragma once

#include <iostream>
using namespace std;

/*
	ERÝÞÝM BELÝRLEYÝCÝLER

	private -> (VARSAYILAN) Class dýþýndan eriþilmez.yetkilendirme gerekli. main kýsmýndan eriþilemez.

	protected -> Class'dan miras alan bir class tarafýndan eriþilebilir. Fakat main kýsmýndan yine de eriþilemez.

	public -> Her yerden eriþilebilir.
*/



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
