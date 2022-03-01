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
		set_capacity(10);
	}
	Vector(int size)
	{
		set_capacity(size);
	}
	Vector(const Vector<T>& source)
	{
		std::cout << "Copy constructor" << std::endl;
		capacity = source.capacity;
		count = source.count;
		if (data_ptr != nullptr)
		{
			delete[] data_ptr;
		}
		data_ptr = new T[source.count];
		memcpy(data_ptr, source.data_ptr, source.count * sizeof(T));
	}
	Vector(Vector&& source) noexcept
	{
		capacity = source.capacity;
		count = source.count;
		if (data_ptr != nullptr)
		{
			delete[] data_ptr;
		}
		data_ptr = source.data_ptr;
		source.data_ptr = nullptr;
		std::cout << "Move constructor" << std::endl;
	}

	~Vector()
	{
		std::cout << "Destruct" << std::endl;
		delete[] data_ptr;
	}

	void set_capacity(int new_capacity)
	{
		T* old_data_ptr = data_ptr;
		data_ptr = new T[new_capacity];

		if (old_data_ptr != nullptr)
		{
			memcpy(data_ptr, old_data_ptr, capacity * sizeof(T));
			delete[] old_data_ptr;
		}
		capacity = new_capacity;
	}

	void add_value(T value)
	{
		if (count >= capacity)
		{
			set_capacity(capacity *= 2);
		}
		data_ptr[count] = value;
		count++;
	}

	T remove_value(T value)
	{
		int index = -1;
		T value_to_return = 0;

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
			return value_to_return;
		}

		value_to_return = data_ptr[index];

		for (int i = index + 1; i < count; i++)
		{
			data_ptr[i - 1] = data_ptr[i];
		}
		count--;

		return value_to_return;
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
	Vector& operator = (const Vector& right_operand)
	{
		std::cout << "Copy assignment" << std::endl;
		if (this != &right_operand)
		{
			capacity = right_operand.capacity;
			count = right_operand.count;
			delete[] data_ptr;
			data_ptr = new T[capacity];
			memcpy(data_ptr, right_operand.data_ptr, count * sizeof(T));
		}
		return *this;
	}

	Vector& operator = (Vector&& right_operand) noexcept
	{
		if (this != &right_operand)
		{
			capacity = right_operand.capacity;
			count = right_operand.count;
			delete[] data_ptr;
			data_ptr = right_operand.data_ptr;
			right_operand.data_ptr = nullptr;
		}
		std::cout << "Move assignment" << std::endl;
		return *this;
	}

	void print()
	{
		for (int i = 0; i < count; i++)
		{
			std::cout << data_ptr[i] << " ";
		}
		std::cout << std::endl;
	}

	int get_size() { return count; }
	int get_capacity() { return capacity; }

};

//template function outside class
template<typename T>
void print_arr(Vector<T>* arr)
{

	for (int i = 0; i < arr->get_size(); i++)
	{
		std::cout << (*arr)[i] << " ";
	}

	std::cout << std::endl;
}