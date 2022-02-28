#include <iostream>
#include "celsius_to_fahrenheit.h"

using namespace std;

int main()
{
	double celsius;
	cout << "Write a number in celsius: " << endl;
	cin >> celsius;
	cout << celsius << " is " << celsius_to_fahrenheit(celsius) << " fahrenheit." << endl;
}

double celsius_to_fahrenheit(double celsius) {
	return ((celsius * 9) / 5) + 32;
}