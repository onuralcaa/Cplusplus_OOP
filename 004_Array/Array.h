#pragma once

#include <iostream>
using namespace std;

class Array {
	int* data, size, capacity;
	int findIndex(int number, int b = 0);

public:
	Array(int user_capacty = 5);
	~Array();
	Array(const Array& copyArray);
	int getSize() const {
		return size;
	}
	int getCapacity() const {
		return capacity;
	}
	void AddItem(int number);
	void printItems();
	void removeIndexItems(int index);
	void removeItem(int number);
	void findElement(int number, int b = 0);
};

Array::Array(int user_capacity)
{
	capacity = user_capacity; //kullan�c� bir de�er vermezde default 5 degeri atanacak.
	size = 0;
	data = new int [capacity];
	cout << "Array is discreated with capacity" << endl;
}

Array::~Array()
{
	delete[] data; //ayr�lan yer silindi.
	cout << "Array destroyed." << endl;
}

Array::Array(const Array& copyArray)
{
	capacity = copyArray.capacity;
	size = copyArray.size;
	data = new int[capacity];
	for (int i = 0; i < copyArray.size; i++)
	{
		data[i] = copyArray.data[i];
	}
	cout << "Array copied to Target. " << endl;
}

 void Array::AddItem(int number)
{
	if (size == capacity)
	{
		int* temp_data = new int[capacity * 2]; //ge�ici yer ay�rma i�lemi
		for (int i = 0; i < size; i++)
		{
			temp_data[i] = data[i];
		}
		delete[] data;
		data = temp_data;
		capacity *= 2;//kapasiteyi iki kat�na ��kartma i�lemi
	}

	data[size] = number;
	size++;
}

void Array::printItems()
{
	if (size != 0)
	{
		for (int i = 0; i < size ; i++)
		{
			cout << data[i] << "-";
		}
	}
	cout << "\n" << "capacity:" << capacity << " size :" << size << endl;
}
