#include<iostream>

using namespace std;

void check_if_lucky_number(int number)
{
	const int last_digit = number % 10;
	while (number != 0)
	{
		const int current_digit = number % 10;
		if (current_digit != last_digit)
		{
			cout << "Not lucky number" << endl;
			return;
		}
		number = number / 10;
	}
	cout << "It's a lucky number" << endl;
}

int main()
{
	int number;
	cout << "Write a number:" << endl;
	cin >> number;
	check_if_lucky_number(number);
}