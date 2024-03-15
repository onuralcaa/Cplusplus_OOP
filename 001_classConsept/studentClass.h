#pragma once

#include <iostream>
using namespace std;

/*
	ER���M BEL�RLEY�C�LER

	private -> (VARSAYILAN) Class d���ndan eri�ilmez.yetkilendirme gerekli. main k�sm�ndan eri�ilemez.

	protected -> Class'dan miras alan bir class taraf�ndan eri�ilebilir. Fakat main k�sm�ndan yine de eri�ilemez.

	public -> Her yerden eri�ilebilir.
*/



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
