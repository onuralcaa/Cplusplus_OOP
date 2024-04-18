#pragma once

#include <iostream>
using namespace std;

class Arrays {
	int* data, size, capacity;
	int findIndex(int number, int b = 0);

public:
	Array(int user_capacty = 5);
	~�rrays();
	Array(const Arrays& copyArray);
	int getSize() const {
		return size;
	}
	int getCapacity() const {
		return capacity;
	}
	int AddItem(int number);
	void printItems();
	void removeIndexItems(int index);
	void removeItem(int number);
	void findElement(int number, int b = 0);
};

Arrays::Array(int user_capacity)
{
	capaciity = user_capacity; //kullan�c� bir de�er vermezde default 5 degeri atanacak.
	size = 0;
	data = new[capacity];
	cout << "Array is discreated with capacity" << endl;
}

Arrays::~Arrays()
{
	delete[] data; //ayr�lan yer silindi.
	cout << "Array destroyed." << endl;
}

Arrays::Array(const Array& copyArray)
{
	capacity = copyArray.capacity;
	size = copyArray.size;
	data = new int[capacity];
	for(int i = 0; i<copyArray.size ; i++)
	{
		data[i] = copyArray.data[i];
	}
	cout << "Array copied to Target. " << endl; 
}