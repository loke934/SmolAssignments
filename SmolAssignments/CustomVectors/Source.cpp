#include<iostream>

using namespace std;

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
			cout << "Value does not exist" << endl;
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
			cout << "Index is out of bounds!" << endl;
			exit(1);
		}
		return data_ptr[index];
	}

	void Print()
	{
		for (int i = 0; i < count; i++)
		{
			cout << data_ptr[i] << " ";
		}
		cout << endl;
	}

	int GetSize() { return capacity; }
	int GetIndex() { return count; }

};

int main()
{
	Vector<int> v1;
	Vector<double> v2(5);

	cout << v1.GetSize() << endl;

	for (int i = 0; i < v1.GetSize(); i++)
	{
		v1.AddValue(i);
		cout << v1[i] << " ";
	}
	cout << endl;

	int removed = v1.RemoveValue(2);
	cout << removed << " is removed." << endl;

	v1.Print();



}