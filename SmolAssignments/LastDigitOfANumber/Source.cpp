#include <iostream>
#include "lastDigitOfNum.h"

using namespace std;

int main() {
	int number;
	cout << "Write a integer number:" << endl;
	cin >> number;
	cout << "Last digit was: " << get_last_digit_of_a_number(number) << endl;
	write_out_numbers(number);
	cout << endl;
	write_out_numbers_reverse(number);
}

int get_last_digit_of_a_number(int number) {
	return abs(number) % 10;
}

void write_out_numbers(int number) {
	if (number > 0)
	{
		write_out_numbers(number / 10);
		int output = number % 10;
		cout << output;
	}
}

void write_out_numbers_reverse(int number) {
	if (number > 0)
	{
		int output = number % 10;
		cout << output;
		write_out_numbers_reverse(number /= 10);
	}
}