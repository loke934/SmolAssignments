#include<iostream>

using namespace std;

bool RetrieveNthBit(int& ref, int bitPos)
{
	int y = 1 << bitPos;
	bool isSet = (ref & y) != 0;
	return isSet;
}

void SetNthBit(int& ref, int nth)
{
	ref |= 1 << nth;
}

int main()
{
	int num = 12;

	const int value = RetrieveNthBit(num, 2);
	cout << value << endl;

	SetNthBit(num, 0);
	cout << num << endl;
}