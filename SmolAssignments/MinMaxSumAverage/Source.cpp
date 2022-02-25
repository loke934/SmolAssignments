#include <iostream>

using namespace std;

void MinMaxSumAverage(int* arr, int length)
{
	int min = arr[0];
	int max = arr[0];
	int sum{0};
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}

		if (arr[i] > max)
		{
			max = arr[i];
		}
		sum += arr[i];
	}
	const int average = sum / length;

	cout << "Smallest value: " << min << endl;
	cout << "Largest value: " << max << endl;
	cout << "Total sum: " << sum << endl;
	cout << "Average: " << average << endl;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = size(arr);
	MinMaxSumAverage(arr, length);
}