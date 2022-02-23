#include<iostream>

using namespace std;

void CheckIfLuckyNumber(int number)
{
	int last_digit = number % 10;
	while (number != 0)
	{
		int current_digit = number % 10;
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
	CheckIfLuckyNumber(number);
}