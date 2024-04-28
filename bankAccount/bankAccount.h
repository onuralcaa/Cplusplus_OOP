#pragma once

#include <iostream>
using namespace std;

class bankAccount {
public:

	bankAccount(string name, string surname, float balance = 0, string phone_number = "");
	bankAccount(const bankAccount& oth);
	~bankAccount();
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
	int getPersonName() const
	{
	
	}
	int getPersonSurname() const;
	int getPersonPhone() const;

private:
	float accountBalance;
	string personName, personeSurname, personPhone;

};

bankAccount::bankAccount(string name, string surname, float balance, string phoneNumber)
{
	if (controlNameSurname(name)) setPersonName(name);
	if (controlNameSurname(surname)) setPersonName(surname);
	if(controlPhoneNumber(phoneNumber)) setPersonPhone(phoneNumber);

}

bankAccount::~bankAccount()
{
	cout << "Account destroyed..." << endl;
}

bool bankAccount::controlNameSurname(string name)
{
	for (int i = 0; i < name.length(); i++)
	{
		if (!isalpha(name[i])) 
			return false;
	}
	return true;
}

bool bankAccount::controlPhoneNumber(string PhoneNumber)
{
	if (PhoneNumber[0] != 0 && PhoneNumber.length() != 11)
	{
		return false;
	}
	else return true;
}

