#include <iostream>

using namespace std;

int LinearSearch(int* collection, int count, int num)
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
	int searchNum;
	cout << "What number to search for between 1-20?" << endl;
	cin >> searchNum;

	int collection[10]{ 1,2,3,4,5,6,7,8,9,10 };
	int index = LinearSearch(collection, 10, searchNum);

	if (index == -1)
	{
		cout << "The number " << searchNum << " was not found." << endl;
	}
	else
	{
		cout << "The number " << searchNum << " was located at position:  " << index << endl;
	}
}