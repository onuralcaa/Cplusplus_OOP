
#include <iostream>

#include "studentClass.h"

int main()
{
    Student student1; //Student sınıfından bir nesne üretilmesi
    Student student2; //nesne 2

    student1.studentName = "Onur";
    student1.studentSurname = "ALACA";
    student1.studentID = "131";
    student1.displayInformation();


    student2.studentName = "Osman";
    student2.studentSurname = "YILMAZ";
    student2.studentID = "314";
    student2.displayInformation();

    return 0;
}
