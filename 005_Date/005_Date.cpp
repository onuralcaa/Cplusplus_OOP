// 005_Date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"

int main()
{
    
    Date mainDate(3, 2, 1944);

    cout << "Day: " << mainDate.getDay() << endl;
    cout << "Month: " << mainDate.getMonth() << endl;
    cout << "Year: " << mainDate.getYear() << endl;

    mainDate.displayDate();

    Date mainDate2;
    mainDate2.displayDate();

    return 0;
}
