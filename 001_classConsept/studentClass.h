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
private:
	string studentName, studentSurname, studentID; //üye deðiþkenler

public:
	void displayInformation(); //üye fonksiyon

	void setName(string name)
	{
		studentName = name;
	}

	void setSurname(string Surname)
	{
		studentSurname = Surname;
	}

	void setID(string ID)
	{
		studentID = ID;
	}

	//alternatif yöntem

	void setInformation(string name, string surname, string ID )
	{
		studentName = name;
		studentSurname = surname;
		studentID = ID;
	}




	string getName()
	{
		return studentName;
	}

	string getSurname()
	{
		return studentSurname;
	}

	string getID()
	{
		return studentID;
	}


};

//Kapsülleme iþlemi ile verilere eriþim denetim altýna alýnýr.

void Student::displayInformation()
{
	cout << "Name:" << studentName << " " << studentSurname << endl;
	cout << "ID:" << studentID << endl;
}
