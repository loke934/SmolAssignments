#include <iostream>

using namespace std;

int linear_search(int* collection, const int count, const int num)
{
	for (int i = 0; i < count; i++)
	{
		if (collection[i] == num)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int search_num;
	cout << "What number to search for between 1-20?" << endl;
	cin >> search_num;

	int collection[10]{ 1,2,3,4,5,6,7,8,9,10 };
	const int index = linear_search(collection, 10, search_num);

	if (index == -1)
	{
		cout << "The number " << search_num << " was not found." << endl;
	}
	else
	{
		cout << "The number " << search_num << " was located at position:  " << index << endl;
	}
}