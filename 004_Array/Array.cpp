
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



    return 0;
}
