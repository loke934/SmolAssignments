#include <iostream>
#include "arithmeticProgression.h"

using namespace std;

int main()
{
	int arr[5]{ 2,4,6,8,10 };
	if (check_if_arithmetic(arr, 5))
	{
		cout << "Is arithmetic" << endl;
	}
	else
	{
		cout << "Is not arithmetic" << endl;
	}
}

bool check_if_arithmetic(const int* arr,const int count)
{
	const int dif = arr[1] - arr[0];
	for (int i = 2; i < count; i++)
	{
		const int currentDif = arr[i] - arr[i - 1];
		if (currentDif != dif)
		{
			return false;
		}
	}
	return true;
}