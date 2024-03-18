// 002_Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"

int main()
{
    float a, b, c;
    cout << "Please enter the sides (a-b-c)" << endl;
    cin >> a >> b >> c;
    Triangle triangle1(a,b,c); //nesne üretimi
    Triangle triangle2(triangle1); //copy test
    //Triangle triangle3 = triangle1; //alternatif copy test

    cout << "---Triangle 1--- " << endl;
    cout << "side A:" << triangle1.getSideA() << endl;
    cout << "side B:" << triangle1.getSideB() << endl;
    cout << "side C:" << triangle1.getSideC() << endl;

    triangle2.setValue(5, 5, 5); //eşkenar
    cout << "---Triangle 2--- " << endl;
    cout << "side A:" << triangle2.getSideA() << endl;
    cout << "side B:" << triangle2.getSideB() << endl;
    cout << "side C:" << triangle2.getSideC() << endl;


    triangle1.triangleType();
    triangle2.triangleType();



    return 0;
}

