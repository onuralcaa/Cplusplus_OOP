// 007_Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix mainMatrix;
	

	for (int i = 0; i < 5 ; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mainMatrix.setValue(i, j, i*j);
		}
	}

	mainMatrix.display();

	Matrix mainMatrix2 = mainMatrix;
	mainMatrix2.display();


	return 0;
}

