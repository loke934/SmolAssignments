#include <iostream>
#include "swap.h"

using namespace std;

int main() {
	int a;
	int b;
	cout << "Please write two numbers, number one:" << endl;
	cin >> a;
	cout << "Number two:" << endl;
	cin >> b;

	swap(a, b);
	PrintSwap(a, b);

	SwapPointer(&a, &b);
	PrintSwap(a, b);

	SwapRef(a, b);
	PrintSwap(a, b);
}

void SwapPointer(int* a, int* b) {
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

void SwapRef(int& a, int& b) {
	a += b;
	b = a - b;
	a -= b;
}

void PrintSwap(int a, int b) {
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}