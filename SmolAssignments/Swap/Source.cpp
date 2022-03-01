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
	print_swap(a, b);

	swap_pointer(&a, &b);
	print_swap(a, b);

	swap_ref(a, b);
	print_swap(a, b);
}

void swap_pointer(int* a, int* b) {
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

void swap_ref(int& a, int& b) {
	a += b;
	b = a - b;
	a -= b;
}

void print_swap(int a, int b) {
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}