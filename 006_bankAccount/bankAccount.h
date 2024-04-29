#pragma once

#include <iostream>
#include <string>
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
	void setPersonBalance(float balance = 0);


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
	int getPersonBalance() const
	{
		return accountBalance;
	}


private:
	float accountBalance;
	string personName, personSurname, personPhone;

};

bankAccount::bankAccount(string name, string surname, float balance, string phoneNumber)
{
	setPersonName(name);
	setPersonSurname(surname);
	setPersonPhone(phoneNumber);
	setPersonBalance(balance);

	cout << "Create bank account." << endl;
}

bankAccount::bankAccount(const bankAccount& oth)
{
	personName = oth.personName;
	personSurname = oth.personSurname;
	personPhone = oth.personPhone;
	accountBalance = oth.accountBalance;

	cout << "Bank Account copied to target." << endl;
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
	while (!controlNameSurname(name))
	{
		cout << "Invalid name, please enter name ! ";
		getline(cin, name); //satir arasi deger alma
	}
	personName = name;
}

void bankAccount::setPersonSurname(string surname)
{
	while (!controlNameSurname(surname))
	{
		cout << "Invalid surname, please enter surname ! " << endl;
		getline(cin, surname); //satir arasi deger alma
	}
	personSurname = surname;
}

void bankAccount::setPersonPhone(string phoneNumber)
{
	while (!controlPhoneNumber(phoneNumber))
	{
		cout << "Invalid phone number, please enter phone number ! " << endl;
		getline(cin, phoneNumber); //satir arasi deger alma
	}
	personPhone = phoneNumber;
}

void bankAccount::setPersonBalance(float balance)
{
	if (balance <= 0) accountBalance = 0;
	else accountBalance = balance;
}

void bankAccount::displayProfile()
{
	cout << "----------------------------------" << endl;
	cout << personName << " " << personSurname << " " << personPhone << endl;
	cout << "----------------------------------" << endl;
}