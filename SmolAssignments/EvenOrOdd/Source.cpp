#include <iostream>
#include "evenOrOdd.h"

using namespace std;

int main() {
	int number;
	cout << "Write a integer number: " << endl;
	cin >> number;
	if (even_or_odd_number(number))
	{
		cout << "This is a even number." << endl;
	}
	else
	{
		cout << "This is a odd number." << endl;
	}
}

bool even_or_odd_number(int a) {
	if (a % 2 == 0)
	{
		return true;
	}
	return false;
}