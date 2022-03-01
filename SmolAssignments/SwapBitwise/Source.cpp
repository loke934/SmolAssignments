#include <iostream>

using namespace std;

void swap_with_bitwise(int& a, int& b)
{
	int c = a ^ b;
	a = a ^ c;
	b = b ^ c;
}

int main()
{
	int a = 3;
	int b = 7;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap_with_bitwise(a, b);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}