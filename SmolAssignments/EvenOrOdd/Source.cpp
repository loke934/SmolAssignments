#include <iostream>
#include "evenOrOdd.h"

using namespace std;

int main() {
	int number;
	cout << "Write a integer number: " << endl;
	cin >> number;
	if (EvenOrOddNumber(number))
	{
		cout << "This is a even number." << endl;
	}
	else
	{
		cout << "This is a odd number." << endl;
	}
}

bool EvenOrOddNumber(int a) {
	if (a % 2 == 0)
	{
		return true;
	}
	return false;
}