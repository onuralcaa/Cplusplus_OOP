#pragma once

#include <iostream>
using namespace std;

class bankAccount {
public:

	bankAccount(string name, string surname, float balance = 0, string phone_number = ""); //cons
	bankAccount(const bankAccount& oth); //copy cons
	~bankAccount(); //dest
	bool controlNameSurname(string nameOrSurname);
	bool controlPhoneNumber(string PhoneNumber);
	void displayProfile();
	void credit(float);
	void withDraw(float);
	void sendMoney(bankAccount& othAccount, float amount);
	void setPersonName(string name);
	void setPersonSurname(string surname);
	void setPersonPhone(string phone);
	void setBalance(float balance = 0);

	string getPersonName() const
	{
		return personName;
	}
    string getPersonSurname() const
	{
		return personSurname;
	}
	string getPersonPhone() const
	{
		return personPhone;
	}

private:
	float accountBalance;
	string personName, personSurname, personPhone;

};

bankAccount::bankAccount(string name, string surname, float balance, string phoneNumber)
{
	if (controlNameSurname(name)) setPersonName(name);
	if (controlNameSurname(surname)) setPersonName(surname);
	if(controlPhoneNumber(phoneNumber)) setPersonPhone(phoneNumber);

}

bankAccount::bankAccount(const bankAccount& oth)
{
	personName = oth.personName;
	personSurname = oth.personSurname;
	personPhone = oth.personPhone;

	cout << "Bank Accoount infos are copied." << endl;
}

bankAccount::~bankAccount()
{
	cout << "Account destroyed..." << endl;
}

bool bankAccount::controlNameSurname(string nameorsurname)
{
	for (unsigned i = 0; i < nameorsurname.length(); i++)
	{
		if (!((nameorsurname.at(i) >= 'A' && nameorsurname.at(i) <= 'Z') || (nameorsurname.at(i) >= 'a' && nameorsurname.at(i) <= 'z'))) return false;
			
	}
	return true;
}

bool bankAccount::controlPhoneNumber(string phoneNumber)
{
	if (phoneNumber.empty())
	{
		return true;
	}
	if (phoneNumber.length() != 11)
	{
		return false;
	}
	

	for (unsigned i = 0; i < phoneNumber.length() ; i++)
	{
		if (!((phoneNumber.at(i) >= '0') && (phoneNumber.at(i) < '9')))
		{
			return false;
		}
	}
	return true;
}

void bankAccount::setPersonName(string name)
{
	personName = name;
}

void bankAccount::setPersonSurname(string surname)
{
	personSurname = surname;
}

void bankAccount::setPersonName(string phoneNumber)
{
	personPhone = phoneNumber;
}

void bankAccount::displayProfile()
{
	cout << "----------------------------------" << endl;
	cout << personName << " " << personSurname << " " << personPhone << endl;
	cout << "----------------------------------" << endl;
}