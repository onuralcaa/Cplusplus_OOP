
#include <iostream>
#include "Array.h"


int main()
{ 
    Array mainArray(10); //default değerle oluştu.

    Array mainArray2(mainArray);

    cout << "Capacity :" << mainArray.getCapacity()<<endl;
    cout << "Size :" << mainArray.getSize()<<endl;


    cout << "Capacity :" << mainArray2.getCapacity() << endl;
    cout << "Size :" << mainArray2.getSize() << endl;

    mainArray.AddItem(5);
    mainArray.AddItem(52);
    mainArray.AddItem(7);
    mainArray.AddItem(32);
    mainArray.AddItem(12);
    mainArray.AddItem(7);
    mainArray.AddItem(4);
    mainArray.AddItem(67);
    mainArray.AddItem(7);
    mainArray.AddItem(22);
    mainArray.AddItem(82);
    mainArray.AddItem(2);
    mainArray.AddItem(7);
    mainArray.printItems();
    mainArray.AddItem(8);
    mainArray.printItems();

    Array mainArray3 = mainArray;
    mainArray.printItems();
    mainArray3.AddItem(43);
    mainArray3.AddItem(53);

    mainArray3.printItems();
    mainArray.printItems();

    mainArray3.removeIndexItems(1);
    mainArray3.printItems();

    mainArray.removeItem(67);
    mainArray.printItems();

    mainArray3.findElement(12, 2); //aramaya 2. indexten başlanacak.

    return 0;
}
