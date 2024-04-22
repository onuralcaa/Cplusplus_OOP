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
	capacity = user_capacity; //kullanýcý bir deðer vermezde default 5 degeri atanacak.
	size = 0;
	data = new int [capacity];
	cout << "Array is discreated with capacity" << endl;
}

Array::~Array()
{
	delete[] data; //ayrýlan yer silindi.
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
		int* temp_data = new int[capacity * 2]; //geçici yer ayýrma iþlemi
		for (int i = 0; i < size; i++)
		{
			temp_data[i] = data[i];
		}
		delete[] data;
		data = temp_data;
		capacity *= 2;//kapasiteyi iki katýna çýkartma iþlemi
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

void Array::removeIndexItems(int index)
{
	if (index < 0 || index >= size)
	{
		cout << "ERROR, No item at the index " << index << endl;
		return;
	}

	//kaydýrma mantýðý ile silme iþlemi
	int removeItem = data[index]; //silinen elemaný yazdýrmak için...
	for (int  i = index; i < size; i++ )
	{
		data[i] = data[i + 1];
	}
	size--;
	cout << "Item " << removeItem << " is deleted" << endl; 
}

void Array::removeItem(int number)
{
	//Kullanýcýnýn girdiði elemaný silme
	int counter = 0; //silinen eleman sayýsý
	for (int i = 0; i < size; i++)
	{
		if (data[i] == number)
		{
			for (int j = i; j < size; j++)
			{
				data[j] = data[j + 1];
			}
			counter++;
			i -= 1;//birden fazla tekrar eden sayýlar için
		}
	}
	cout << counter << " Items(" << number << ")" << "are deleted from the Arrays" << endl;
	size -= counter;
}
