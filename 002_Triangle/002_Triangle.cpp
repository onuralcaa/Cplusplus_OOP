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


    return 0;
}

