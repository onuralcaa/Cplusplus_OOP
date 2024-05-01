#pragma once

#include <iostream>

class Matrix {
private:
	int row, col;
	int** matrix;
public:
	Matrix(int r = 5, int c = 5); //default settings
	~Matrix();
	Matrix(const Matrix& oth);
	int getRowNumber();
	int getColumnNumber();
	void setValue(int r, int c, int value);
	void randomSet();
	void identityMatrixSet();
	void display();
	void addMatrix(Matrix& othMatrix);
};