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
		capacity = source.capacity;
		count = source.count;
		if (data_ptr != nullptr)
		{
			delete[] data_ptr;
		}
		data_ptr = new T[source.capacity];
		for (int i = 0; i < capacity; i++)
		{
			data_ptr[i] = source.data_ptr[i];
		}
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
	}

	~Vector()
	{
		delete[] data_ptr;
	}

	void set_capacity(int new_capacity)
	{
		T* old_data_ptr = data_ptr;
		data_ptr = new T[new_capacity];

		if (old_data_ptr != nullptr)
		{
			for (int i = 0; i < capacity; i++)
			{
				data_ptr[i] = old_data_ptr[i];
			}
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

	void remove_value(T value)
	{
		int index = -1;

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
			std::cout << "Value does not exist in collection" << std::endl;
		}

		for (int i = index + 1; i < count; i++)
		{
			data_ptr[i - 1] = data_ptr[i];
		}
		count--;
	}

	T remove_value_at_end()
	{
		T value_to_return = 0;
		value_to_return = data_ptr[count - 1];
		count--;
		return value_to_return;
	}

	T& operator[](int index)
	{
		if (index >= count)
		{
			exit(1);
		}
		return data_ptr[index];
	}
	Vector& operator = (const Vector& right_operand)
	{
		if (this != &right_operand)
		{
			capacity = right_operand.capacity;
			count = right_operand.count;
			delete[] data_ptr;
			data_ptr = new T[capacity];
			for (int i = 0; i < capacity; i++)
			{
				data_ptr[i] = right_operand.data_ptr[i];
			}
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