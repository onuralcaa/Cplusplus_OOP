
#include <iostream>

#include "studentClass.h"

int main()
{
    Student student1; //Student sınıfından bir nesne üretilmesi
    Student student2; //nesne 2

    student1.setName("Murat");
    student1.setSurname("OGUN");
    student1.setID("425");

    string name = student1.getName();
    string surname = student1.getSurname();
    string ID = student1.getID();

    cout << name << endl;
    cout << surname << endl;
    cout << ID << endl;



    //student1.displayInformation();


    student2.setInformation("Hakan", "KORNAK", "5243");
    student2.displayInformation();
 

    return 0;
}
