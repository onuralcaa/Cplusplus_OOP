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

    Date mainDate2(3, 2, 1944);
    mainDate2.displayDate();


    mainDate.compareDate(mainDate2); //compare test

    cout << "-----------------------------------------" << endl;
    for (int i = 0 ; i < 30 ; i++)
    {
        mainDate2.increaseDay();
        mainDate2.displayDate();

    }


    return 0;
}
