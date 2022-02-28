#include<iostream>

using namespace std;

void contains_number(const int& a, int& number)
{
	const int whole_number = number;
	while (number != 0)
	{
		const int current_digit = number % 10;
		if (current_digit == a)
		{
			cout << whole_number << " contains number " << a << endl;
			return;
		}
		number = number / 10;
	}
	cout << whole_number << " Do not contain number " << a << endl;
}

int main()
{
	int a;
	int number;

	cout << "Write a single digit number:" << endl;
	cin >> a;
	cout << "Write any number:" << endl;
	cin >> number;
	contains_number(a, number);
}