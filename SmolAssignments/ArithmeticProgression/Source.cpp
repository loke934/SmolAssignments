#include <iostream>
#include "arithmeticProgression.h"

using namespace std;

int main()
{
	int arr[5]{ 2,4,6,8,10 };
	if (CheckIfArithmetic(arr, 5))
	{
		cout << "Is arithmetic" << endl;
	}
	else
	{
		cout << "Is not arithmetic" << endl;
	}
}

bool CheckIfArithmetic(int* arr, int count)
{
	int dif = arr[1] - arr[0];
	for (size_t i = 2; i < count; i++)
	{
		int currentDif = arr[i] - arr[i - 1];
		if (currentDif != dif)
		{
			return false;
		}
	}
	return true;
}