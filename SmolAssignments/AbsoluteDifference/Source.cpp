#include <iostream>
#include "absolute_difference.h"

using namespace std;

int main() {
	int a;
	int b;
	cout << "Write two numbers and get the absolute difference. \nNumber 1:" << endl;
	cin >> a;
	cout << "Number 2: " << endl;
	cin >> b;
	cout << "The absolute difference is: " << absolute_difference(a, b) << endl;
}

int my_abs(int x) {
	return x < 0 ? -x : x;
}

int absolute_difference(int a, int b) {
	int sum = a - b;
	sum = my_abs(sum);
	return sum;
}