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

	//constructor konusu (parametreli, parametresiz olarak ikiye ayrýlýr.)

	Student();
	Student(string, string);
	Student(string, string, string);

	~Student(); //destructor tanýmý...BÝR SINIFTA BÝR KEZ DESTRUCTOR TANIMLANABÝLÝR.
	Student(const Student& oth); //Copy cons lar parametre olarak baþka bir nesnenin adresini alýrlar.

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

Student::Student()
{
	cout << "Default constructor worked." << endl;
	studentName = "None";
	studentSurname = "None";
	studentID = "None";
}

Student::Student(string name, string surname, string ID)
{
	cout << "Constructor 3 parameters worked." << endl;
	studentName = name;
	studentSurname = surname;
	studentID = ID;
}

Student::Student(string name, string surname)
{
	cout << "Constructor 2 parameters worked." << endl;
	studentName = name;
	studentSurname = surname;
	studentID = "None";
}

Student::~Student() 
{
	cout << "Destructor worked." << endl;

}

Student::Student(const Student& oth)
{
	cout << "Copy constructor worked."<<endl;
	studentName = oth.studentName;
	studentSurname = oth.studentSurname;
	studentID = oth.studentID;
}




//Kapsülleme iþlemi ile verilere eriþim denetim altýna alýnýr.
void Student::displayInformation()
{
	cout << "Name:" << studentName << " " << studentSurname << endl;
	cout << "ID:" << studentID << endl;
}
