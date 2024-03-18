
#include <iostream>

#include "studentClass.h"

int main()
{
    Student student1("Osman", "ALACA"); //Parametreli olarak çağrıldı.
    Student student2("Duygu", "KARA", "432"); //nesne 2

    Student studentArray[5]; //oluşturulan her bir nesne için constructor çalışır.
    //Nesne oluştururken constructor parametre gönderebiliriz.

    /*
    student1.setName("Murat");
    student1.setSurname("OGUN");
    student1.setID("425");
    */

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
