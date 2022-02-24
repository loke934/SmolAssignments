#include<iostream>
#include"swap.h"

using namespace std;

int main()
{
	int a;
	int b;
	cout << "Write two numbers:" << endl;
	cin >> a >> b;
	cout << "A: " << a << " B: " << b << endl;
	cout << "doing swap..." << endl;
	SwapUsingTemplate<int>(a, b);
	cout << "A: " << a << " B: " << b << endl;
}