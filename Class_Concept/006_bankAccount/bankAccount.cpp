// bankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "bankAccount.h"

int main()
{
    bankAccount acc1("Onur", "ALACA", 1500, "35435434422");

    cout << "Name : " << acc1.getPersonName() << endl;
    cout << "Surname : " << acc1.getPersonSurname() << endl;
    cout << "Phone number : " << acc1.getPersonPhone() << endl;
    cout << "Balance : " << acc1.getPersonBalance() << endl;

    bankAccount acc2 = acc1; //copy cons
    acc2.setPersonName("Turan");


    acc1.Credit(456);
    acc2.withDraw(58);


    acc2.displayProfile(); //test
    acc1.displayProfile();

    bankAccount acc3("Rahime", "COT", 3221);
    acc3.displayProfile(); //test
    acc1.sendMoney(acc3, 423);

    acc3.displayProfile(); //test
    acc1.displayProfile();


    return 0;
}
