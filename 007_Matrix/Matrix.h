#pragma once

#include <iostream>
using namespace std;

class Matrix {
private:
	int row, col;
	int** matrix; //pointer to pointer
public:
	Matrix(int r = 5, int c = 5); //default settings
	~Matrix();
	Matrix(const Matrix& oth);
	int getRowNumber() const { return row; }
	int getColumnNumber() const { return col; }
	void setValue(int r, int c, int value);
	void randomSet();
	void identityMatrixSet();
	void display();
	void addMatrix(Matrix& othMatrix);
};

Matrix::Matrix(int r, int c)
{
	//Control
	if (r > 0 && c > 0)
	{
		row = r;
		col = c;
	}
	else
	{
		row = 5; //default
		col = 5; //default
	}

	//dynamic matrix created.
	matrix = new int* [row];
	for (int i = 0; i < row ; i++)
	{
		matrix[i] = new int[col];
	}
	cout << "Matrix created." << endl;
	cout << "Row:" << row << "  " << "Col:" << col << endl;

}

Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	cout << "Matrix destroyed." << endl;
}

Matrix::Matrix(const Matrix& oth)
{
	row = oth.row;
	col = oth.col;

	matrix = new int* [row];
	for (int i = 0; i < row ; i++)
	{
		matrix[i] = new int [col];
	}

	//copy process
	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col ; j++)
		{
			matrix[i][j] = oth.matrix[i][j];
		}

	}
	cout << "Matrix copy to target." << endl;
}

void Matrix::setValue(int r, int c, int value)
{
	//send to index
	matrix[r][c] = value;
}

void Matrix::display()
{
	cout << "Matrix : " << endl;

	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col ; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}