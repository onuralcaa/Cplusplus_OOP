#pragma once

#include <iostream>
using namespace std;

class Date {
public:
	Date(int d = 1, int m = 1, int y = 1900); //varsayýlanlar ayarlandý.
	Date(const Date& oth);
	~Date();
	void setDate(int d = 1, int m = 1, int y = 1800);
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void increaseDay();
	void compareDate(const Date& othDate);
	void displayDate();

private:
	int year, month, day;
	const int monthDays[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const string monthString[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

};