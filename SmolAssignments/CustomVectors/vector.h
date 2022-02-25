#pragma once
#include<iostream>

template<typename T>
class Vector
{
	int capacity = 0;
	int count = 0;

	T* data_ptr = nullptr;

public:
	Vector()
	{
		SetCapacity(10);
	}
	Vector(int size)
	{
		SetCapacity(size);
	}
	~Vector()
	{
		delete[] data_ptr;
	}

	void SetCapacity(int newCapacity)
	{
		T* old_data_ptr = data_ptr;
		data_ptr = new T[newCapacity];

		if (old_data_ptr != nullptr)
		{
			memcpy(data_ptr, old_data_ptr, capacity * sizeof(T));
			delete[] old_data_ptr;
		}
		capacity = newCapacity;
	}

	void AddValue(T value)
	{
		if (count >= capacity)
		{
			SetCapacity(capacity *= 2);
		}
		data_ptr[count] = value;
		count++;
	}

	T RemoveValue(T value)
	{
		int index = -1;
		T valueToReturn = 0;

		for (int i = 0; i < count; i++)
		{
			if (data_ptr[i] == value)
			{
				index = i;
				break;
			}
		}

		if (index == -1)
		{
			std::cout << "Value does not exist" << std::endl;
			return valueToReturn;
		}

		valueToReturn = data_ptr[index];

		for (int i = index + 1; i < count; i++)
		{
			data_ptr[i - 1] = data_ptr[i];
		}
		count--;

		return valueToReturn;
	}

	T& operator[](int index)
	{
		if (index >= count)
		{
			std::cout << "Index is out of bounds!" << std::endl;
			exit(1);
		}
		return data_ptr[index];
	}

	void Print()
	{
		for (int i = 0; i < count; i++)
		{
			std::cout << data_ptr[i] << " ";
		}
		std::cout << std::endl;
	}

	int GetSize() { return count; }
	int GetCapacity() { return capacity; }

};

//template function outside class
template<typename T>
void print_arr(Vector<T>* arr)
{

	for (int i = 0; i < arr->GetSize(); i++)
	{
		std::cout << (*arr)[i] << " ";
	}

	std::cout << std::endl;
}