#include<iostream>

using namespace std;

int RetriveNthBit(int& ref, int nth)
{
	return ref << nth;
}

void SetNthBit(int& ref, int nth)
{
	ref |= 1 << nth;
}

int main()
{
	int num = 12;
	int value = RetriveNthBit(num, 2);
	cout << value << endl;
	SetNthBit(num, 0);
	cout << num << endl;
}