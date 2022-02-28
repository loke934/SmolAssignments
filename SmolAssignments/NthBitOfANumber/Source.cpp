#include<iostream>

using namespace std;

bool retrieve_nth_bit(int& ref, const int bit_pos)
{
	int temp = 1 << bit_pos;
	const bool is_set = (ref & temp) != 0;
	return is_set;
}

void set_nth_bit(int& ref, int nth)
{
	ref |= 1 << nth;
}

int main()
{
	int num = 12;

	const int value = retrieve_nth_bit(num, 2);
	cout << value << endl;

	set_nth_bit(num, 0);
	cout << num << endl;
}