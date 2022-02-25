#include <iostream>
#include "lastDigitOfNum.h"

using namespace std;

int main() {
	int number;
	cout << "Write a integer number:" << endl;
	cin >> number;
	cout << "Last digit was: " << GetLastDigitOfANumber(number) << endl;
	WriteOutNumbers(number);
	cout << endl;
	WriteOutNumbersReverse(number);
}

int GetLastDigitOfANumber(int number) {
	return abs(number) % 10;
}

void WriteOutNumbers(int number) {
	if (number > 0)
	{
		WriteOutNumbers(number / 10);
		int output = number % 10;
		cout << output;
	}
}

void WriteOutNumbersReverse(int number) {
	if (number > 0)
	{
		int output = number % 10;
		cout << output;
		WriteOutNumbersReverse(number /= 10);
	}
}